/*Write a program to Check perfect number. */
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter  anumber to check a perfect number : ";
    cin >> n;
    int sum=0;
    for(int i=1 ; i<n;i++){
        if(n%i==0)
        sum+=i;
    }
    if(sum==n && n>0)
    cout<<"The number is a perfect number";
    else 
    cout <<"The number is not a perfect number";
    return 0;
}