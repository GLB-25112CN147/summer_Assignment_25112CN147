/**/
#include <iostream>
#include <string>

using namespace std;

// Normal structure definition
struct SalaryRecord
{
    string empId;
    string name;
    double baseSalary;
    double hra;
    double da;
    double tax;
    double netSalary;
};

int main()
{
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    SalaryRecord list[n];

    cout << "Enter details for Employee " << endl;
    for (int i = 0; i < n; i++)
    {
        ;

        cout << "Enter Employee ID: ";
        cin >> list[i].empId;

        cout << "Enter Name: ";
        cin >> list[i].name;

        cout << "Enter Base Salary: ";
        cin >> list[i].baseSalary;

        list[i].hra = list[i].baseSalary * 0.20;
        list[i].da = list[i].baseSalary * 0.10;
        list[i].tax = list[i].baseSalary * 0.12;
        list[i].netSalary = (list[i].baseSalary + list[i].hra + list[i].da) - list[i].tax;
    }

    cout << "                               SALARY RECORD                             " << endl;
    cout << "ID        Name         Base        HRA       DA       Tax       NetSalary" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << list[i].empId << " "
             << list[i].name << " "
             << list[i].baseSalary << " "
             << list[i].hra << " "
             << list[i].da << " "
             << list[i].tax << " "
             << list[i].netSalary << endl;
    }

    return 0;
}
