/*Write a program to Count even and odd elements.*/
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
    int even=0,odd=0;
    for(int digit : v){
        if(digit %2==0)
        even++;
        else
        odd++;
    }
    cout << "The number of even digits is : " << even << " and odd digits are : " << odd;


    return 0;
}