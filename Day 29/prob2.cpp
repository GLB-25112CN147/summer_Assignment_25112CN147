/*Write a program to Create menu-driven array operations system*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    int choice;
    double ans;
    cout << "Enter the size of array : ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elemennts : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    do
    {
        cout << "1. Sort the array" << endl
             << "2. Add the elements" << endl
             << "3. Multiply the elements" << endl
             << "4. Diaplay Array " << endl
             << "5. Exit" << endl;
        cout << "Enter choice : ";
        cin >> choice;
        if (choice == 5)
        {
            cout << "Exiting";
            break;
        }
        switch (choice)
        {
        case 1:
            sort(arr.begin(), arr.end());
            break;
        case 2:
            ans = 0;
            for (int i = 0; i < n; i++)
            {
                ans += arr[i];
            }
            cout << "Sum of elements is : " << ans;
            break;

        case 3:
            ans = 1;
            for (int i = 0; i < n; i++)
            {
                ans *= arr[i];
                break;
            }
        case 4:
            cout << "Your array is : ";
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;

        default:
            cout << "Invalid response";
            break;
        }
    } while (true);

    return 0;
}