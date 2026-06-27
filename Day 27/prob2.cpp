/*Write a program to Create employee management system*/
#include <iostream>
using namespace std;
struct employee
{
    string employeeid;
    double salary;
    string name;
    string designation;
};

int main()
{
    int n;
    cout << "Enter number of employeees : ";
    cin >> n;
    employee list[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        cout << "Enter employee id : ";
        cin >> list[i].employeeid;
        cout << "Enter name : ";
        cin >> list[i].name;
        cout << "Enter designation : ";
        cin >> list[i].designation;
        cout << "Enter salary : ";
        cin >> list[i].salary;
    }
    cout << "                                      EMPLOYEE RECORD                                        " << endl;
    cout << "EMPLOYEE ID               NAME                     DESIGNATION                     SALARY           " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << list[i].employeeid << "             " << list[i].name << "                   " << list[i].designation << "                  " << list[i].salary << endl;
    }

    return 0;
}