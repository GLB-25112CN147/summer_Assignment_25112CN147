/*Write a program to Find LCM of two numbers.*/
#include <iostream>
using namespace std;

int main() {
    int a,b,gcd=1;
    cout << "Enter the numbers to find lcm : ";
    cin >> a >> b;
    for(int i=min(a,b) ; i>=1 ; i--){
        if(a%i==0 && b%i==0){
            gcd=i;
            break;
        }
    }
    int lcm = (a*b)/gcd;
    cout << "The lcm of " << a << " and " << b << " is " << lcm;
    return 0;
}