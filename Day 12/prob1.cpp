/*Write a program to Write function for palindrome.*/
#include <iostream>
using namespace std;
void checkpallindrome(int a){
    int temp=a,sum=0;
    while(a>0){
        int r=a%10;
        sum= sum*10 + r;
        a/=10;
    }
    if(sum==temp){
    cout << temp <<" is a pallindrome number";
    return;
    }
    else{
        cout << temp << " is not a pallindrome number";
        return;
    }
}

int main() {
    int n;
    cout << "Enter the number to check pallindrome : ";
    cin >> n;
    checkpallindrome(n);

    return 0;
}