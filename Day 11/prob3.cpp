/*Write a program to Write function to check prime. */
#include <iostream>
using namespace std;
    void checkprime(int a){
        for(int i=2 ; i<a/2;i++){
            if(a%i==0){
            cout << a << " is not a prime number";
            return;
            }
        }
         cout << a << " is a prime number";
    }

int main() {
    int num;
    cout << "Enter the number to check : ";
    cin >> num;
    checkprime(num);

    return 0;
}