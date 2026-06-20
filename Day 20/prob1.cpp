/*Write a program to Multiply matrices.*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int r1, r2, c1, c2;
    cout << "enter the size of rows of mat 1 : ";
    cin >> r1;
    cout << "enter the columns of mat 1 : ";
    cin >> c1;
    cout << "enter the size of rows of mat 2 : ";
    cin >> r2;
    cout << "enter the columns of mat 2 : ";
    cin >> c2;
    if (r2 != c1)
    {
        cout << "Multiplication not possible !!";
        return 0;
    }
    vector<vector<int>> arr1(r1, vector<int>(c1));
    vector<vector<int>> arr2(r2, vector<int>(c2));
    vector<vector<int>> ans(r1, vector<int>(c2));
    cout << "Enter the elements of matrix 1 : " << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> arr1[i][j];
        }
    }
    cout << "Enter the elements of matrix 2 : " << endl;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> arr2[i][j];
        }
    }
    if (c1 == r2)
    {
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                for (int k = 0; k < c1; k++)
                {
                    ans[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }
    }
    cout << "The multiplicated matrix is : " << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}