/*Write a program to Find sum and average of array.*/
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
    int sum=0;
    for(int digit : v){
        sum+=digit;
    }
    cout<< "The sum of  the given array is : " << sum << " and its average is : " << sum/5;

    return 0;
}