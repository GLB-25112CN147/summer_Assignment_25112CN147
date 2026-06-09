/*Write a program to Print factors of a number.*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number to print the factors of the number : ";
    cin >> n;

    cout << "Factors of " << n << " are: ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
