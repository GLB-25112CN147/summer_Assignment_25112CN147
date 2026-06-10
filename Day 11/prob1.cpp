/*Write a program to Write function to find sum of two numbers.*/
#include <iostream>
using namespace std;
int sum(int a , int b){
    return a+b;
}

int main() {
    int num1,num2;
    cout <<"Enter the numbers to add : ";
    cin >> num1 >> num2;
    cout <<"The answer is : " << sum(num1,num2);
    return 0;
}