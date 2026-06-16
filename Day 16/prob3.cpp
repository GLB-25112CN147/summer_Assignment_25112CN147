/*Write a program to Find pair with given sum.*/
#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int main() {
     int n,target ;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements : ";
    for(int i=0 ; i<n;i++){
        cin >> arr[i];
    }
    cout << "Enter the target sum : ";
    cin >> target;
    unordered_set <int> s;
    for(int i=0 ; i<n ; i++){
        int first = arr[i];
        int second= target-first;
        if(s.find(second)!=s.end()){
            cout << first <<  " " << second << endl;
            s.erase(second);
        }
        s.insert(first);
    }
    return 0;
}