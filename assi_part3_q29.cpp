// q29 Define a structure Student with fields name and marks. Pass an array of students to a
//function that displays all student details.
//struct Student {
 //string name;
 //int marks;
//};
//void displayStudents(Student arr[], int size);
#include <iostream>

using namespace std;

struct Student {
    string name;
    int marks;
};

void displayStudents(Student arr[], int size) {
    cout << "student details:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "name: " << arr[i].name << ", marks: " << arr[i].marks << endl;
    }
}

int main() {
    int size;
    cout << "enter number of students: ";
    cin >> size;

    Student students[size];

    for (int i = 0; i < size; i++) {
        cout << "enter name of student " << i + 1 << ": ";
        cin >> students[i].name;
        cout << "enter marks of student " << i + 1 << ": ";
        cin >> students[i].marks;
    }

    displayStudents(students, size);

    return 0;
}
