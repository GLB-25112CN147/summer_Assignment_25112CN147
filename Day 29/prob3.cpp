/*Write a program to Create menu-driven string operations system.*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    int choice;

    cout << "Enter a string: ";
    getline(cin, str);

    do
    {
        cout << endl;
        cout << "********** STRING OPERATIONS **********" << endl;
        cout << "1. Display String" << endl;
        cout << "2. Find Length" << endl;
        cout << "3. Convert to Uppercase" << endl;
        cout << "4. Convert to Lowercase" << endl;
        cout << "5. Reverse String" << endl;
        cout << "6. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "String: " << str << endl;
            break;

        case 2:
            cout << "Length of string: " << str.length() << endl;
            break;

        case 3:
            for (int i = 0; i < str.length(); i++)
            {
                str[i] = toupper(str[i]);
            }
            cout << "Uppercase String: " << str << endl;
            break;

        case 4:
            for (int i = 0; i < str.length(); i++)
            {
                str[i] = tolower(str[i]);
            }
            cout << "Lowercase String: " << str << endl;
            break;

        case 5:
            reverse(str.begin(), str.end());
            cout << "Reversed String: " << str << endl;
            break;

        case 6:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }

    } while (choice != 6);

    return 0;
}