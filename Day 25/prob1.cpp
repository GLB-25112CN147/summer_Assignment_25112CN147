/*Write a program to Merge two sorted arrays.*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the size of first array : ";
    cin >> n;
    cout << "Enter the size of second array : ";
    cin >> m;
    vector<int> arr1(n), arr2(m);
    vector<int> ans;
    cout << "Enter the elements of first array : ";
    for (int &digit : arr1)
    {
        cin >> digit;
    }
    cout << "Enter the elements of second array : ";
    for (int &digit : arr2)
    {
        cin >> digit;
    }
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    arr1.resize(n + m);
    int i = n - 1, j = m - 1, k = m + n - 1;
    while (i >= 0 && j >= 0)
    {
        if (arr1[i] > arr2[j])
        {
            arr1[k] = arr1[i];
            i--;
            k--;
        }
        else
        {
            arr1[k] = arr2[j];
            j--;
            k--;
        }
    }
    while (j >= 0)
    {
        arr1[k] = arr2[j];
        j--;
        k--;
    }
    cout << "The merged sorted array is : ";
    for (int digit : arr1)
    {
        cout << digit << " ";
    }

    return 0;
}