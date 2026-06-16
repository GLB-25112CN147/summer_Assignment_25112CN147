/*Write a program to Intersection of arrays.*/
#include <iostream>
#include <vector>
#include <set>
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
    set<int> s1(v1.begin(), v1.end());
    set<int> intersection;
    for (int x : v2)
    {
        if (s1.find(x) != s1.end())
        {
            intersection.insert(x);
        }
    }
    for (int x : intersection)
    {
        cout << x << " ";
    }

    return 0;
}