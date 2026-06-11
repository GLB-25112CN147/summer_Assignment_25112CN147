/*Write a program to Write function for Fibonacci. */
#include <iostream>
using namespace std;
void nthtermfibo(int n){
    int first=0,second=1,third;
    if(n==1)
    cout << first;
    else if(n==2)
    cout << second;
    else{
        for(int i=3;i<=n;i++){
            third=first + second;
            first = second;
            second=third;
        }
    }
    cout << "The " << n<< "th term is : " << third;
    return;
}

int main() {
        int n;
     cout << "Enter the nth term to find : ";
     cin >> n;
       nthtermfibo(n);
    return 0;
}