/*Write a program to Write function to find maximum.*/
#include <iostream>
using namespace std;
int maxi(int a , int b){
    if(a>b) return a;
    else return b;
}

int main() {
    int num1,num2;
    cout << "Enter the numbers to comapre : ";
    cin >> num1 >> num2;
    cout <<"The maximum is : " << maxi(num1,num2);

    return 0;
}