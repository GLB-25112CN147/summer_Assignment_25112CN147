/*Write a program to Write function for Armstrong.*/
#include <iostream>
using namespace std;
int power(int a , int b){
    if(b==0)
    return 1;
    b--;
    return a*power(a,b);
    
}

void checkarmstrong(int a){
    int temp = a,sum=0,digits=0,copy=temp;
    while(a>0){
        digits++;
        a/=10;
    }
    while(temp>0){
        int r=temp%10;
        sum+=power(r,digits);
        temp/=10;
    }
    if(copy==sum){
        cout << sum << " is an armstrong number";
        return;
    }
    else {
        cout << copy << " is not an armstrong number";
        return;
    }
}

int main() {
    int n;
    cout << "Enter the number to check : ";
    cin >> n;
    checkarmstrong(n);

    return 0;
}