/*Write a program to Print character triangle.*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of triangle : ";
    cin >> n;
    char k='A';
     for(int i=0 ; i<n;i++){
        for(char j=0;j<=i;j++){
        cout <<  char(k+j) << " ";
        }
        cout << endl;
    }
    return 0;
}