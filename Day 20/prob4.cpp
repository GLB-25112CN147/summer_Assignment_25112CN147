/*Write a program to Find column-wise sum.*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int r, c;
    cout << "Enter the number of rows : ";
    cin >> r;
    cout << "Enter the number of columns : ";
    cin >> c;
    vector<vector<int>> mat(r, vector<int>(c));
    cout << "Enter the elements of matrix : " << endl;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cin >> mat[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        int sum = 0;
        for (int j = 0; j < c; j++)
        {
            sum += mat[j][i];
        }
        cout << "The sum of column" << i + 1 << " is : " << sum << endl;
    }

    return 0;
}