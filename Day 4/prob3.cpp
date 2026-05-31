/*Write a program to Check Armstrong number.*/
#include <iostream>
#include <math.h>
int power(int a , int b){
    if(b==0)
    return 1;
    b--;
    return a*power(a,b);
    
}
using namespace std;

int main() {
    int n;
    int digits=0;
    cout <<"Enter a number : ";
    cin >> n;
    int copy=n;
    int copy2=n;
    int sum=0;
    while(copy2>0){
        digits++;
        copy2/=10;
    }
    while(n>0){
        int r=n%10;
        sum+=power(r,digits);
        n/=10;
    }
    if(copy==sum){
        cout << "The number is a armstrong number";
    }
    else
    cout << "Not a armstrong number";

    return 0;
}