/*Write a program to Find largest and smallest element.*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    vector<int>v(n);
    cout <<"Enter the values : ";
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    int min=v[0],max=v[0];
    for(int i=1 ; i<n ; i++){
        if(v[i]>max)
        max=v[i];
        if(v[i]<min)
        min=v[i];
    }
    cout << "The maximum element of array is : " << max << " and its minimum element is : " << min;

    return 0;
}