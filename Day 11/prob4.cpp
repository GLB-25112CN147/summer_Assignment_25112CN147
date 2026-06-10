/*Write a program to Write function to find factorial. */
#include <iostream>
using namespace std;
int fact(int a){
    int f=1;
    for(int i=1; i<=a ;i++){
        f*=i;
    }
    return f;
}

int main() {
    int n;
    cout << "Enter the number to find factorial : ";
    cin >> n;
    cout << "The factorial is : " << fact(n);

    return 0;
}