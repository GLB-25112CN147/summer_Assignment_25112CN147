/*Write a program to Create contact management system.*/
#include <iostream>
using namespace std;
struct contact
{
    string name;
    string number;
};

int main()
{
    int n;
    cout << "Enter no of contacts : ";
    cin >> n;
    contact people[n];
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Name : ";
        getline(cin, people[i].name);
        cout << "Enter number : ";
        getline(cin, people[i].number);
    }
    cout << "                CONTACT LIST                " << endl;
    cout << "    NAME                     CONTACT NO     " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << "    " << people[i].name << "                     " << people[i].number << endl;
    }

    return 0;
}