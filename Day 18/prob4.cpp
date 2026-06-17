/*Write a program to Sort array in descending order.*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    vector <int> arr(n);
    cout << ":Enter the elements : ";
    cout << "Enter the elements : ";
    for(int i=0 ; i<n ;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n-1;i++){
        int maxidx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[maxidx]){
                maxidx = j;
            }
        }
        swap(arr[maxidx],arr[i]);
    }
    cout << "Your sorted array is : ";
    for(int x : arr){
        cout << x << " ";
    }

    return 0;
}