/*Write a program to Check strong number.*/
#include <iostream>
using namespace std;
int fact(int a){
    if(a==1 || a==0) return 1;
    return a*fact(a-1);
}

int main() {
    int n,sum=0;
    cout <<"Enter the number : ";
    cin >> n;
    int temp=n;
    while(n>0){
        int r =n%10;
        sum+=fact(r);
        n/=10;
    }
    if(temp==sum){
        cout << "The number is a strong number" ;
    }
    else 
    cout <<"The number is not a strong number";

    return 0;
}