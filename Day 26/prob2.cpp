/*Write a program to Create voting eligibility system.*/
#include <iostream>
using namespace std;
struct voterslist
{
    string name;
    int age;
};

int main()
{

    int n;
    cout << "Enter the number of voters : ";
    cin >> n;
    voterslist votes[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the name of voter : ";
        cin >> votes[i].name;
        cout << "Enter the age : ";
        cin >> votes[i].age;
    }
    for (int i = 0; i < n; i++)
    {
        if (votes[i].age >= 18)
        {
            cout << votes[i].name << " can vote." << endl;
        }
    }

    return 0;
}