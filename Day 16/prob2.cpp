/*Write a program to Find maximum frequency element.*/
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
    int maxfreq=0,ans=0;
    for(int i=0;i<n;i++){
        int freq=0;
        for(int j=0 ; j<n;j++){
            if(arr[i]==arr[j]){
                freq++;
            }
        }
        if(freq>maxfreq){
            maxfreq=freq;
            ans=arr[i];
        }
    }
    cout << "The maximum frquency element is : " << ans << " With frequency : " << maxfreq; 

    return 0;
}