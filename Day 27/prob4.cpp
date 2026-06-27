/**/
#include <iostream>
#include <string>

using namespace std;
struct StudentRecord
{
    string rollNo;
    string name;
    double mathMarks;
    double scienceMarks;
    double englishMarks;
    double hindimarks;
    double compmarks;
    double totalMarks;
    double percentage;
    char grade;
};

int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    StudentRecord list[n];
    cout << endl
         << "Enter details for Student " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Roll Number: ";
        cin >> list[i].rollNo;

        cout << "Enter Student Name: ";
        cin >> list[i].name;

        cout << "Enter Marks for Math (out of 100): ";
        cin >> list[i].mathMarks;

        cout << "Enter Marks for Science (out of 100): ";
        cin >> list[i].scienceMarks;

        cout << "Enter Marks for Hindi (out of 100): ";
        cin >> list[i].hindimarks;

        cout << "Enter Marks for Computer (out of 100): ";
        cin >> list[i].compmarks;

        cout << "Enter Marks for English (out of 100): ";
        cin >> list[i].englishMarks;
        list[i].totalMarks = list[i].mathMarks + list[i].scienceMarks + list[i].englishMarks + list[i].compmarks + list[i].hindimarks;
        list[i].percentage = list[i].totalMarks / 5;

        if (list[i].percentage >= 85)
        {
            list[i].grade = 'A';
        }
        else if (list[i].percentage >= 70)
        {
            list[i].grade = 'B';
        }
        else if (list[i].percentage >= 50)
        {
            list[i].grade = 'C';
        }
        else if (list[i].percentage >= 33)
        {
            list[i].grade = 'D';
        }
        else
        {
            list[i].grade = 'F';
        }
    }

    cout << "                                STUDENT MARKSHEET RECORD                               " << endl;
    cout << "RollNo        Name      Math    Sci    Eng    Hin    Comp     Total Percentage%   Grade" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << list[i].rollNo << "        "
             << list[i].name << "      "
             << list[i].mathMarks << "    "
             << list[i].scienceMarks << "    "
             << list[i].englishMarks << "    "
             << list[i].hindimarks << "    "
             << list[i].compmarks << "     "
             << list[i].percentage << "   "
             << list[i].grade
             << endl;
    }

    return 0;
}
