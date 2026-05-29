/*Write a program to Find product of digits.*/
#include <iostream>
using namespace std;

int main() {
    int n;
    int prod=1;
    cout << "Enter the number : ";
    cin >> n;
    while(n>0){
        int r=n%10;
        prod*=r;
        n/=10;
    }
    cout << "The product of the number is : " << prod; 

    return 0;
}