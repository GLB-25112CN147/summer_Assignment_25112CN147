/*Write a program to Merge arrays.*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the size of array 1 and array 2 : ";
    cin >> n >> m;
    vector<int> v1(n);
    vector<int> v2(m);
    cout << "Enter first array elements : ";
    for (int &digit : v1)
    {
        cin >> digit;
    }
    cout << "Enter second array elements : ";
    for (int digit : v2)
    {
        cin >> digit;
        v1.push_back(digit);
    }
    cout << "your merged array is : ";
    for (int k : v1)
    {
        cout << k << " ";
    }
    return 0;
}