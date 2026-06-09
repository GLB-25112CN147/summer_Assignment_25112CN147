/*Write a program to Print prime numbers in a range. */
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n,m;
    cout <<"Enter the starting of range : ";
    cin >> m;
    cout << "Enter the end of range : ";
    cin >> n;
    for(int i=m;i<n;i++){
        if(n>1){
        bool isprime = true;
        for(int j=2 ; j<i ; j++){
            if(i%j==0){
            isprime = false;
          }
         }
         if(isprime)
        cout << i << " ";
       }
     }
    return 0;
  }