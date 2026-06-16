/*Write a program to Find common elements.*/
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> v1(n);
    cout << "Enter  array elements : ";
    for (int &digit : v1)
    {
        cin >> digit;
    }
    unordered_set<int> s;
    unordered_set<int> duplicate;
    for (int i = 0; i < n; i++)
    {
        if (s.find(v1[i]) == s.end())
        {
            s.insert(v1[i]);
        }
        else
            duplicate.insert(v1[i]);
    }
    cout << "The common elements of the array is : ";
    for (int digit : duplicate)
    {
        cout << digit << " ";
    }

    return 0;
}