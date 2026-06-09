// Write a program to Calculate sum of first N 
// natural numbers.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number till to find the sum of numbers : " ;
    cin >> n;
    int sum=0;
    for(int i=1 ; i<=n;i++){
        sum+=i;
    }
    cout << "The sum of " << n << " natural numbers is : " << sum;
    

    return 0;
}