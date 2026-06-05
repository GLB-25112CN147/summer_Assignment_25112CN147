/*Write a program to Count set bits in a number.*/
#include <iostream>
using namespace std;

int main() {
    int n,count=0;
    cout <<"Enter the number : ";
    cin >> n;
    while(n>0){
        count+=n%2;
        n/=2;
    }
    cout << "The number of set bits are : " << count;

    return 0;
}