/*Write a program to Find row-wise sum.*/
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
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> mat[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        int sum = 0;
        for (int j = 0; j < c; j++)
        {
            sum += mat[i][j];
        }
        cout << "The sum of row" << i + 1 << " is : " << sum << endl;
    }

    return 0;
}