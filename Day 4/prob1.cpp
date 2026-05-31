/*Write a program to Generate Fibonacci series.*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"Enter the number of terms : ";
    cin >> n;
    int first =0,second=1,third;
    if (n <= 0) {
        cout << "Please enter a positive number.";
    }
    else if (n == 1) {
        cout << first;
    }
    else {
        cout << first << " " << second << " ";
    }
    for(int i=3 ; i<=n ; i++){
        third=first + second;
        cout << third << " ";
        first=second;
        second=third;
    }
    return 0;
}