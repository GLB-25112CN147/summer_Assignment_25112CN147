/*Write a program to Binary search. */
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int target;
    cout << "Enter the target element : ";
    cin >> target;
    int st = 0, end = n - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (arr[mid] == target)
        {
            cout << "Target found";
            return 0;
        }
        else if (target > arr[mid])
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << "Target not found !!!";

    return 0;
}