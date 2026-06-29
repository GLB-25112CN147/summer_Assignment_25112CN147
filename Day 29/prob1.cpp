/*Write a program to Create menu-driven calculator*/
#include <iostream>
using namespace std;

int main()
{
    double op1;
    double op2;
    double ans;
    int choice;
    cout << "              CALCULATOR            " << endl;
    cout << "Enter first operand : ";
    cin >> op1;
    do
    {
        cout << "1. Add" << endl
             << "2 . Subtarct" << endl
             << "3. Multiply" << endl
             << "$. Divide" << endl
             << "5. Exit" << endl;
        cout << "Enter choice : ";
        cin >> choice;
        if (choice == 5)
        {
            cout << "Exiting Calculator ";
            break;
        }

        cout << "Enter second operand : ";
        cin >> op2;

        switch (choice)
        {
        case 1:
            ans = op1 + op2;
            break;
        case 2:
            ans = op1 - op2;
            break;
        case 3:
            ans = op1 * op2;
            break;
        case 4:
            if (op2 != 0)
            {
                ans = op1 / op2;
                break;
            }
            else
            {
                cout << "Division not possible";
            }
        default:
            cout << "Invalid Response : ";
            break;
        }

        cout << "Answer : " << ans << endl;
        op1 = ans;

    } while (true);
    return 0;
}