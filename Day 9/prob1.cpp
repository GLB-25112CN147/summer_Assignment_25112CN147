/*Write a program to Print reverse star pattern. */
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of triangle : ";
    cin >> n;
    for(int i=1 ; i<=n ; i++){
        for(int j=i ; j<=n ; j++){
            cout << "* ";
        }
        cout << endl;
    }
 return 0;
}