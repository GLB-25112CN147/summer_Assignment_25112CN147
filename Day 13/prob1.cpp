/*Write a program to Input and display array. */
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    vector <int> v(n);
    cout <<"Enter the values : ";
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    cout << "Your input is : ";
    for(int digit : v){
        cout << digit  << " ";
    }

    return 0;
}