/*Write a program to Remove duplicates from array.*/
#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int main()
{
    int n, target;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    unordered_set<int> s;
    cout << "The non duplicates  array is : ";
    for (int i = 0; i < n; i++)
    {
        if (s.find(arr[i]) == s.end())
        {
            cout << arr[i] << " ";
            s.insert(arr[i]);
        }
    }
    return 0;
}