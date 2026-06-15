/*Write a program to Move zeroes to end.*/
#include <iostream>
using namespace std;

int main() {
    int n ;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements : ";
    for(int i=0 ; i<n;i++){
        cin >> arr[i];
    }
    int end=0;
    for(int i=0 ; i<n ; i++){
        if(arr[i]!=0){
        swap(arr[i],arr[end]);
        end++;
        }
    }
    for(int j=0;j<n;j++){
    cout << arr[j] << " ";
    }
    return 0;
}