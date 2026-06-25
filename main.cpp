#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Student {
    int id;
    string name;
    int age;
    float marks;
};
void addStudent(vector<Student>& students){

    Student s;

    cout << "Enter Student ID: ";
    cin >> s.id;

    cout << "Enter Name: ";
    cin >> s.name;

    cout << "Enter Age: ";
    cin >> s.age;

    cout << "Enter Marks: ";
    cin >> s.marks;


    students.push_back(s);

    cout << "Student Added Successfully\n";
}


int main() {
    vector<Student> students;

    int choice;

    do {
        cout << "\n===== Student Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. View Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {
            case 1:

    
    addStudent(students);
    break;

            case 2:
                cout << "View Students Selected\n";
                break;

            case 3:
                cout << "Search Student Selected\n";
                break;

            case 4:
                cout << "Update Student Selected\n";
                break;

            case 5:
                cout << "Delete Student Selected\n";
                break;

            case 6:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid Choice\n";
        }

    } while(choice != 6);

    return 0;
}