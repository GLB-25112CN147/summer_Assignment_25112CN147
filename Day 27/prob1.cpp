/*Write a program to Create student record management system*/
#include <iostream>
#include <string>
using namespace std;
struct record
{
    string name;
    string admissionid;
    int rollno;
    string contactnum;
    string residence;
};
int main()
{
    int n;
    cout << "Enter the number of students : ";
    cin >> n;
    record list[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter student name : ";
        cin.ignore();
        getline(cin, list[i].name);
        cout << "Enter student Admission id : ";
        cin >> list[i].admissionid;
        cout << "Enter roll no : ";
        cin >> list[i].rollno;
        cout << "Enter student contact num : ";
        cin >> list[i].contactnum;
        cout << "Enter residence : ";
        cin >> list[i].residence;
    }
    cout << "                                    STUDENT RECORD                                          " << endl;
    cout << "ROLL NO          ADMISSION ID          NAME            CONTACT NUMBER         RESIDENCE " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << list[i].rollno << "          " << list[i].admissionid << "       " << list[i].name << "              "
             << list[i].contactnum << "         " << list[i].residence << endl;
    }

    return 0;
}
