/*Write a program to Find missing number in array.*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter the size of array : ";
    cin >> n;
    int actualsum=0,expesum=0,arr[n];
    cout << "Enter " << n-1 << " elements : ";
    for(int i=0 ;i<n-1 ; i++){
        cin >> arr[i];
    }
    actualsum=n*(n+1)/2;
    for(int i=0 ; i<n-1 ; i++){
        expesum+=arr[i];
    }
    cout << "The missing element is : " << actualsum - expesum;

    return 0;
}