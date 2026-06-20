/*Write a program to Check symmetric matrix.*/
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
        cout << "Only square matrix is transposable!!!";
        return 0;
    }
    vector<vector<int>> mat(n, vector<int>(m));
    vector<vector<int>> clone(n, vector<int>(m));
    cout << "Enter the elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
            clone[i][j] = mat[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i != j && i < j)
            {
                swap(mat[i][j], mat[j][i]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == clone[i][j])
                continue;
            else
            {
                cout << "Not a symmetric matrix!!!" << endl;
                return 0;
            }
        }
    }
    cout << "Matrix : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << "is a symmetric matrix" << endl;
    return 0;
}