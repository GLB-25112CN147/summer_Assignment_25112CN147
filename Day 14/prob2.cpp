/*Write a program to Frequency of an element.*/
#include <iostream>
using namespace std;

int main() {
    int n,target,count=0;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to find frequency : ";
    cin >> target;
    int pos;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==target){
            count++;
        }
    }
    cout << "the frequency of the element is : " << count;
    return 0;
}