#include <iostream>
using namespace std;

int main()
{
    int low = 1, high = 100, mid;
    char answer;

    cout << "Think of a number between 1 and 100." << endl;

    while (low < high)
    {
        mid = (low + high) / 2;

        cout << "Is your number greater than " << mid << "? (y/n): ";
        cin >> answer;

        if (answer == 'y' || answer == 'Y')
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }

    cout << " Your number is: " << low << endl;

    return 0;
}