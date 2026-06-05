/*Write a program to Find x^n without pow().*/
#include <iostream>
using namespace std;

int main() {
    int n,power,ans=1;
    cout << "Enter the number : ";
    cin >> n;
    cout << "Enter the power : ";
    cin >> power;
    while(power>0){
        ans*=n;
        power--;
    }
    cout <<"The answer is : " << ans;

    return 0;
}