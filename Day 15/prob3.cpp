/*Write a program to Rotate array right.*/
#include <iostream>
using namespace std;

int main() {
    int n,k ; 
    cout << "Enter the siize of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements : ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Enter the position to rotate right : ";
    cin >> k;
    k=k%n; 
    int t=n-k;
    int rot[k];
    for(int i=t ; i<n;i++){
        rot[i-t]=arr[i];
    }
    for(int i=t-1;i>=0;i--){
        arr[i+k]=arr[i];
    }
    for(int j=0;j<k;j++){
        arr[j]=rot[j];
    }
    cout << "Your rotated array is : ";
    for(int i=0 ; i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}