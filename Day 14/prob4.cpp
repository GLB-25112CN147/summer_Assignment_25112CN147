/*Write a program to Find duplicates in array.*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool found=false;
    for(int i=0;i<n;i++){
        bool copy=false;
        for(int k=0;k<i;k++){
            if(arr[i]==arr[k]){
                copy=true;
                break;
            }
        }
        if(copy)
        continue;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout << arr[i] << " ";
                found=true;
            }
        }
    }
    return 0;
}