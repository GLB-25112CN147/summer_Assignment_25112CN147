/*Write a program to Linear search.*/
#include <iostream>
using namespace std;

int main() {
    int n,target;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the target element : ";
    cin >> target;
    int pos;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==target){
            pos=i;
            cout <<"The number is at " << pos+1 << " position in the array"; 
            return 0;
        }
    }
    cout << "Target not found !!";
    return 0;
}