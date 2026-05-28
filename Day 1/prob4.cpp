/*Write a program to Count digits in a number. */
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int count=0;
    while(n>0){
        count++;
        n/=10;
    }
    cout << "the number of digits is : " << count ;

    return 0;
}