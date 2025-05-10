#include <iostream>
#include <vector>
#include <string>
using namespace std;

// base exception
class universitysystemexception {
protected:
    string msg;
public:
    universitysystemexception(string m) { msg = m; }
    string what() const { return msg; }
};

// specific exceptions
class enrollmentexception : public universitysystemexception {
public:
    enrollmentexception(string m) : universitysystemexception(m) {}
};

class gradeexception : public universitysystemexception {
public:
    gradeexception(string m) : universitysystemexception(m) {}
};

class paymentexception : public universitysystemexception {
public:
    paymentexception(string m) : universitysystemexception(m) {}
};

// base class for person
class person {
protected:
    string name;
    int age;
    string id;
    string contact;
public:
    person(string n, int a, string i, string c) {
        if (i.empty()) throw universitysystemexception("invalid id");
        if (c.empty()) throw universitysystemexception("invalid contact");
        name = n;
        age = a;
        id = i;
        contact = c;
    }
    void displaydetails() {
        cout << "name: " << name << ", age: " << age << endl;
    }
    virtual float calculatepayment() { return 0.0; }
};

// student base class
class student : public person {
protected:
    string enrollmentdate;
    string program;
    float gpa;
public:
    student(string n, int a, string i, string c, string e, string p, float g)
    : person(n, a, i, c) {
        enrollmentdate = e;
        program = p;
        gpa = g;
    }
    void displaydetails() {
        person::displaydetails();
        cout << "program: " << program << ", gpa: " << gpa << endl;
    }
    float calculatepayment() {
        if (gpa < 0 || gpa > 4.0) throw paymentexception("invalid gpa for payment");
        return 2000.0;
    }
};

// undergraduate student
class undergraduatestudent : public student {
private:
    string major;
    string minor;
    string graduationdate;
public:
    undergraduatestudent(string n, int a, string i, string c, string e, string p, float g, string mj, string mn, string gd)
    : student(n, a, i, c, e, p, g) {
        major = mj;
        minor = mn;
        graduationdate = gd;
    }
    void displaydetails() {
        student::displaydetails();
        cout << "major: " << major << ", minor: " << minor << endl;
    }
};

// graduate student
class graduatestudent : public student {
private:
    string topic;
    string advisor;
    string thesis;
public:
    graduatestudent(string n, int a, string i, string c, string e, string p, float g, string t, string adv, string th)
    : student(n, a, i, c, e, p, g) {
        topic = t;
        advisor = adv;
        thesis = th;
    }
    void displaydetails() {
        student::displaydetails();
        cout << "research: " << topic << ", advisor: " << advisor << endl;
    }
};

// professor base class
class professor : public person {
protected:
    string department;
    string specialization;
    int years;
public:
    professor(string n, int a, string i, string c, string d, string s, int y)
    : person(n, a, i, c) {
        department = d;
        specialization = s;
        years = y;
    }
    void displaydetails() {
        person::displaydetails();
        cout << "professor of " << department << ", years: " << years << endl;
    }
};

// assistant professor
class assistantprofessor : public professor {
public:
    assistantprofessor(string n, int a, string i, string c, string d, string s, int y)
    : professor(n, a, i, c, d, s, y) {}
    float calculatepayment() {
        if (years < 0) throw paymentexception("invalid years of service");
        return 4000 + years * 100;
    }
};

// associate professor
class associateprofessor : public professor {
public:
    associateprofessor(string n, int a, string i, string c, string d, string s, int y)
    : professor(n, a, i, c, d, s, y) {}
    float calculatepayment() {
        if (years < 0) throw paymentexception("invalid years of service");
        return 6000 + years * 200;
    }
};

// full professor
class fullprofessor : public professor {
public:
    fullprofessor(string n, int a, string i, string c, string d, string s, int y)
    : professor(n, a, i, c, d, s, y) {}
    float calculatepayment() {
        if (years < 0) throw paymentexception("invalid years of service");
        return 8000 + years * 300;
    }
};

int main() {
    try {
        undergraduatestudent u("alice", 20, "s001", "1111", "2023", "cs", 3.6, "cs", "math", "2026");
        u.displaydetails();
        cout << "payment: " << u.calculatepayment() << endl;

        graduatestudent g("bob", 24, "s002", "2222", "2022", "it", 3.9, "ai", "dr. smith", "ai research");
        g.displaydetails();
        cout << "payment: " << g.calculatepayment() << endl;

        assistantprofessor ap("dr. ray", 35, "p001", "3333", "cs", "ml", 3);
        ap.displaydetails();
        cout << "payment: " << ap.calculatepayment() << endl;

        associateprofessor asp("dr. jane", 45, "p002", "4444", "math", "algebra", 10);
        asp.displaydetails();
        cout << "payment: " << asp.calculatepayment() << endl;

        fullprofessor fp("dr. max", 55, "p003", "5555", "eng", "literature", 20);
        fp.displaydetails();
        cout << "payment: " << fp.calculatepayment() << endl;

    } catch (universitysystemexception &e) {
        cout << "error: " << e.what() << endl;
    }

    return 0;
}
