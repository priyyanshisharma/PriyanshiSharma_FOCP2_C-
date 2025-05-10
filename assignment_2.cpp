#include <iostream>
#include <vector>
#include <string>
using namespace std;

// base class for person
class person {
private:
    string name;
    int age;
    string id;
    string contact;
public:
    person(string n, int a, string i, string c) {
        setname(n);
        setage(a);
        id = i;
        contact = c;
    }
    ~person() {}
    void setname(string n) { if (!n.empty()) name = n; }
    void setage(int a) { if (a > 0 && a < 120) age = a; }
    void setid(string i) { id = i; }
    void setcontact(string c) { contact = c; }
    string getname() { return name; }
    int getage() { return age; }
    string getid() { return id; }
    string getcontact() { return contact; }
    void displaydetails() {
        cout << "name: " << name << ", age: " << age << endl;
    }
    float calculatepayment() { return 0.0; }
};

// derived class for student
class student : public person {
private:
    string enrollmentdate;
    string program;
    float gpa;
public:
    student(string n, int a, string i, string c, string e, string p, float g)
    : person(n, a, i, c) {
        enrollmentdate = e;
        program = p;
        setgpa(g);
    }
    void setgpa(float g) { if (g >= 0.0 && g <= 4.0) gpa = g; }
    float getgpa() { return gpa; }
    void displaystudentdetails() {
        displaydetails();
        cout << "student gpa: " << gpa << endl;
    }
    float getstudentpayment() { return 2000.0; }
};

// derived class for professor
class professor : public person {
private:
    string department;
    string specialization;
    string hiredate;
public:
    professor(string n, int a, string i, string c, string d, string s, string h)
    : person(n, a, i, c) {
        department = d;
        specialization = s;
        hiredate = h;
    }
    void displayprofessordetails() {
        displaydetails();
        cout << "professor of " << department << endl;
    }
    float getprofessorpayment() { return 5000.0; }
};

// class for course info
class course {
private:
    string code;
    string title;
    int credits;
    string description;
public:
    course(string c, string t, int cr, string d) {
        code = c;
        title = t;
        setcredits(cr);
        description = d;
    }
    void setcredits(int cr) { if (cr > 0) credits = cr; }
};

// class for department info
class department {
private:
    string name;
    string location;
    float budget;
public:
    department(string n, string l, float b) {
        if (!n.empty()) name = n;
        location = l;
        budget = b;
    }
};

// class to manage grades
class gradebook {
private:
    vector<pair<string, float>> grades;
public:
    void addgrade(string studentid, float grade) {
        grades.push_back({studentid, grade});
    }
    float calculateaveragegrade() {
        float sum = 0;
        for (auto g : grades) sum += g.second;
        return grades.empty() ? 0 : sum / grades.size();
    }
    float gethighestgrade() {
        float maxg = 0;
        for (auto g : grades) if (g.second > maxg) maxg = g.second;
        return maxg;
    }
    vector<string> getfailingstudents() {
        vector<string> fail;
        for (auto g : grades) if (g.second < 50.0) fail.push_back(g.first);
        return fail;
    }
};

// class to manage enrollments
class enrollmentmanager {
private:
    vector<pair<string, string>> enrollments;
public:
    void enrollstudent(string studentid, string coursecode) {
        enrollments.push_back({studentid, coursecode});
    }
    void dropstudent(string studentid, string coursecode) {
        for (auto it = enrollments.begin(); it != enrollments.end(); ++it) {
            if (it->first == studentid && it->second == coursecode) {
                enrollments.erase(it);
                break;
            }
        }
    }
    int getenrollmentcount(string coursecode) {
        int count = 0;
        for (auto e : enrollments) if (e.second == coursecode) count++;
        return count;
    }
};

int main() {
    // creating student objects
    student s1("alice", 20, "s001", "12345", "2023-09-01", "cs", 3.5);
    student s2("bob", 22, "s002", "67890", "2023-09-01", "it", 3.8);

    // creating professor objects
    professor p1("dr. smith", 45, "p001", "54321", "cs", "ai", "2010-01-01");
    professor p2("dr. jones", 50, "p002", "98765", "math", "algebra", "2008-01-01");

    // creating course and department objects
    course c1("c101", "intro to cs", 3, "basics of cs");
    course c2("m202", "calculus", 4, "advanced math");
    department d1("cs", "block a", 100000);
    department d2("math", "block b", 80000);

    // using gradebook
    gradebook gb;
    gb.addgrade("s001", 85);
    gb.addgrade("s002", 45);
    gb.addgrade("s001", 90);

    // using enrollment manager
    enrollmentmanager em;
    em.enrollstudent("s001", "c101");
    em.enrollstudent("s002", "m202");

    // displaying info
    s1.displaystudentdetails();
    cout << "payment: " << s1.getstudentpayment() << endl;
    s2.displaystudentdetails();
    cout << "payment: " << s2.getstudentpayment() << endl;
    p1.displayprofessordetails();
    cout << "payment: " << p1.getprofessorpayment() << endl;
    p2.displayprofessordetails();
    cout << "payment: " << p2.getprofessorpayment() << endl;

    return 0;
}
