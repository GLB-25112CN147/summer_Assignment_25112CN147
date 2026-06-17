/*Write a program to Bubble sort.*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    cout << "Your sorted array is : ";
    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
    return 0;
}