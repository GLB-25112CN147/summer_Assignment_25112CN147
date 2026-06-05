/*Write a program to Convert decimal to binary.*/
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n,sum=0,i=1;
    cout << "Enter the decimal number to convert to  binary : ";
    cin >> n;
    while(n>0){
        int r=n%2;
        sum+=r*i;
        i*=10;
        n/=2;
    }
    cout << "The converted number is : ";
    cout << sum;

    return 0;
}