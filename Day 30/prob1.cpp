/*Write a program to Create student record system using arrays and strings*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    int maxStudents = 100;

    struct Student {
        int rollNumber;
        string name;
        string course;
        float marks;
    };

    Student database[100];
    int studentCount = 0;
    int userChoice = 0;

    do {
        cout << endl << "=================================" << endl;
        cout << "     STUDENT RECORD SYSTEM       " << endl;
        cout << "=================================" << endl;
        cout << "1. Add Student Record" << endl;
        cout << "2. Display All Student Records" << endl;
        cout << "3. Search Student by Roll Number" << endl;
        cout << "4. Exit" << endl;
        cout << "=================================" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> userChoice;

        cin.ignore(); 

        switch (userChoice) {
            case 1: {
                if (studentCount >= maxStudents) {
                    cout << endl << "Database limit reached! Cannot add more records." << endl;
                } else {
                    Student newStudent;

                    cout << endl << "Enter Roll Number: ";
                    cin >> newStudent.rollNumber;
                    cin.ignore(); 

                    cout << "Enter Full Name: ";
                    getline(cin, newStudent.name);

                    cout << "Enter Course: ";
                    getline(cin, newStudent.course);

                    cout << "Enter Total Marks: ";
                    cin >> newStudent.marks;

                    database[studentCount] = newStudent;
                    studentCount++;

                    cout << endl << "Record added successfully!" << endl;
                }
                break;
            }
            case 2: {
                if (studentCount == 0) {
                    cout << endl << "No student records available to display." << endl;
                } else {
                    cout << endl << "Roll No\tName\t\tCourse\t\tMarks" << endl;
                    cout << "----------------------------------------------------" << endl;
                    
                    for (int i = 0; i < studentCount; i++) {
                        cout << database[i].rollNumber << "\t"
                             << database[i].name << "\t\t"
                             << database[i].course << "\t\t"
                             << database[i].marks << endl;
                    }
                }
                break;
            }
            case 3: {
                if (studentCount == 0) {
                    cout << endl << "No student records available to search." << endl;
                } else {
                    int searchRoll;
                    bool recordFound = false;

                    cout << endl << "Enter Roll Number to search: ";
                    cin >> searchRoll;

                    for (int i = 0; i < studentCount; i++) {
                        if (database[i].rollNumber == searchRoll) {
                            cout << endl << "--- Record Found ---" << endl;
                            cout << "Roll Number : " << database[i].rollNumber << endl;
                            cout << "Name        : " << database[i].name << endl;
                            cout << "Course      : " << database[i].course << endl;
                            cout << "Total Marks : " << database[i].marks << endl;
                            recordFound = true;
                            break; 
                        }
                    }

                    if (!recordFound) {
                        cout << endl << "Record with Roll Number " << searchRoll << " not found." << endl;
                    }
                }
                break;
            }
            case 4:
                cout << endl << "Exiting the system. Goodbye!" << endl;
                break;
            default:
                cout << endl << "Invalid selection! Try again." << endl;
        }
    } while (userChoice != 4);

    return 0;
}

