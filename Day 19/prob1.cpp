/*Write a program to Add matrices.*/
#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the number of rows : ";
    cin >> n;
    cout << "Enter the number of columns : ";
    cin >> m;
    int arr1[n][m], arr2[n][m], result[n][m];
    cout << "Enter the elements of first matrix : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr1[i][j];
        }
    }
    cout << "Enter the elements of second matrix : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr2[i][j];
        }
    }
    cout << "the sum of matrices is : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr1[i][j] + arr2[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}