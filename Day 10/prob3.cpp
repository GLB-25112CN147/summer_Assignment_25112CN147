/*Write a program to Print number pyramid.*/
#include <iostream>
using namespace std;

int main() {
     int n;
    cout << "Enter the size of pyramid : ";
    cin >> n;
    for(int i=1 ; i<=n ; i++){
        for(int j = n ; j>i; j--){
            cout<< "  ";
        }
        int num=1;
        for(int k=1; k<=(2*i-1); k++){
            cout<< num << " ";
            if(k<i)
            num++;
            else
            num--;
        }
        cout << endl;
    }

    return 0;
}