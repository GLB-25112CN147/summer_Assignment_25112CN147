/*Write a program to Check whether a number is 
prime. */
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number to check whether the number is prime or not : ";
    cin >> n;
    int t=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
        t=0;
        break;}
    }
    if(t==0)
    cout << "The number is not a prime number";
    else
    cout <<"The number is a prime number";

    return 0;
}