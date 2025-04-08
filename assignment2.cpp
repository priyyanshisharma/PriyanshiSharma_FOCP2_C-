#include <iostream>
#include <vector>
#include <string>

using namespace std;

// student class definition
class Student {
private:
    string name;
    int rollNumber;
    float CGPA;
    vector<string> courses;

public:
    // default constructor
    Student() : name(""), rollNumber(0), CGPA(0.0) {}

    // parameterized constructor
    Student(string n, int r, float c) : name(n), rollNumber(r), CGPA(c) {}

    // copy constructor
    Student(const Student& other) : name(other.name), rollNumber(other.rollNumber), CGPA(other.CGPA), courses(other.courses) {}

    // destructor
    ~Student() {}

    // add course to student record
    void addCourse(string course) {
        bool exists = false;
        for (const string& existingCourse : courses) {
            if (existingCourse == course) {
                exists = true;
                break;
            }
        }
        if (!exists) {
            courses.push_back(course);
        } else {
            cout << "course already added!" << endl;
        }
    }

    // update cgpa
    void updateCGPA(float newCGPA) {
        if (newCGPA >= 0.0 && newCGPA <= 4.0) {
            CGPA = newCGPA;
        } else {
            cout << "invalid cgpa value!" << endl;
        }
    }

    // display student information
    void displayInfo() {
        cout << "student name: " << name << endl;
        cout << "roll number: " << rollNumber << endl;
        cout << "cgpa: " << CGPA << endl;
        cout << "courses enrolled: ";
        for (const string& course : courses) {
            cout << course << " ";
        }
        cout << endl;
    }

    // getter for roll number
    int getRollNumber() const {
        return rollNumber;
    }
};

// student management system class definition
class StudentManagementSystem {
private:
    vector<Student> students;

public:
    // add new student to the system
    void addStudent(Student student) {
        students.push_back(student);
    }

    // search for student by roll number
    Student* searchStudent(int rollNumber) {
        for (auto& student : students) {
            if (student.getRollNumber() == rollNumber) {
                return &student;
            }
        }
        return nullptr;
    }

    // display all student records
    void displayAllStudents() {
        for (auto& student : students) {
            student.displayInfo();
            cout << "---------------------------------" << endl;
        }
    }
};

int main() {
    StudentManagementSystem sms;

    // create student records
    Student student1("john doe", 1001, 3.5);
    Student student2("jane smith", 1002, 3.8);

    // add students to the system
    sms.addStudent(student1);
    sms.addStudent(student2);

    // add courses to student records
    student1.addCourse("math 101");
    student1.addCourse("physics 102");
    student2.addCourse("chemistry 101");

    // update cgpa
    student1.updateCGPA(3.7);

    // display all students
    sms.displayAllStudents();

    // search for a student by roll number
    Student* searchedStudent = sms.searchStudent(1001);
    if (searchedStudent) {
        cout << "student found!" << endl;
        searchedStudent->displayInfo();
    } else {
        cout << "student not found!" << endl;
    }

    return 0;
}
