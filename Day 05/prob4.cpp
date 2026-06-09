/*Write a program to Find largest prime factor.*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"Enter the number to find largest prime factor : " ;
    cin >> n;
    for(int i = n; i>=2;i--){
        bool isprime = true;
        if(n%i==0){
            for(int j =2 ; j*j<=i;j++){
            if(i%j==0){
                isprime=false;
                break;
            }
           }
            if(isprime){
            cout << i;
            break;
         }
         }
        
    }

    return 0;
}
