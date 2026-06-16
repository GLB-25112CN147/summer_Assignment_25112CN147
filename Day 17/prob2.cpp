/*Write a program to Union of arrays.*/
#include <iostream>
#include <set>
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
    for (int &digit : v2)
    {
        cin >> digit;
    }
    set<int> uni;
    for (int x : v1)
        uni.insert(x);
    for (int x : v2)
        uni.insert(x);
    cout << "Union : ";
    for (int x : uni)
    {
        cout << x << " ";
    }
}