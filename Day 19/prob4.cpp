/*Write a program to Find diagonal sum.*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the number of rows : ";
    cin >> n;
    cout << "Enter the number of columns : ";
    cin >> m;
    if (n != m)
    {
        cout << "ENter a square matrix.";
        return 0;
    }
    cout << "Enter the elements of matrix : ";
    vector<vector<int>> arr(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int sum = 0;
    cout << "The sum of diagonal elements is : ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j)
            {
                sum += arr[i][j];
            }
        }
    }
    cout << sum;

    return 0;
}