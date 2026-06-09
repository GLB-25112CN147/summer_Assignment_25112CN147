/*Write a program to Convert binary to decimal.*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"Enter the binary number to conver to decimal : ";
    cin >> n;
    int sum=0,i=1;
    while(n>0){
        int r=n%10;
        sum+=r*i;
        i*=2;
        n/=10;
    }
    cout <<"The number in decuimal is : " << sum;
    return 0;
}