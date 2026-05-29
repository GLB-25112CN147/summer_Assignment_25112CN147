/*Write a program to Reverse a number.*/
#include <iostream>
using namespace std;

int main() {
    int  n;
    int  rev=0;
    cout << "Enter the number to find reverse : ";
    cin >> n;
    while(n>0){
        int r = n%10;
        rev=10*rev+r;
        n/=10;
    }
    cout << "the reverse of the number is : " << rev;


    return 0;
}