/*Write a program to Print character pyramid.*/
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
        int num =0;
        for(int k=1; k<=(2*i-1); k++){
            cout<< char('A'+num) << " ";
            if(k<i)
            num++;
            else
            num--;
        }
        cout << endl;
    }

    return 0;
}