/*Write a program to Rotate array left.*/
#include <iostream>
using namespace std;

int main() {
    int n; 
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements : ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int k;
    cout << "Enter the position : ";
    cin >> k;
    k=k%n;
    int rot[k];
    for(int i=0 ;i<k; i++){
        rot[i]=arr[i];
    }
    for(int i=k;i<n;i++){
        arr[i-k]=arr[i];
    }
    for(int j=0 ; j<k; j++){
        arr[n-k+j]=rot[j];
    }
    cout << "Your rotated array  is : ";
    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " ";
    }
    return 0;
}