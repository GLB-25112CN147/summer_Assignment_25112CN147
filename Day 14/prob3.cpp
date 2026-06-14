/*Write a program to Second largest element.*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Input elements in the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = arr[0], secmax = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            secmax = max;
            max = arr[i];
        }
        if (arr[i] > secmax && arr[i] != max)
            secmax = arr[i];
    }
    if (secmax == arr[0])
        cout << "No second largest element exists.";
    else
        cout << "The second largest element in the array is : " << secmax;

    return 0;
}
