/*Write a program to Transpose matrix.*/
#include <iostream>
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
        cout << "Only square matrix is transposable!!!";
        return 0;
    }
    int arr1[n][m];
    cout << "Enter the elements of first matrix : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr1[i][j];
        }
    }
    cout << "The transpose of the given matrix is : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i != j && i < j)
            {
                swap(arr1[i][j], arr1[j][i]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}