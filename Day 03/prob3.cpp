/*Write a program to Find GCD of two numbers.*/
#include <iostream>
using namespace std;

int main() {
    int a,b,gcd=1;
    cout << "Enter the numbers to find gcd : ";
    cin >> a >> b;
    for(int i=min(a,b) ; i>=1; i--){
        if(a%i==0 && b%i==0){
            gcd=i;
            break;
        }
    }
    cout << "The gcd of the number is : " << gcd;

    return 0;
}