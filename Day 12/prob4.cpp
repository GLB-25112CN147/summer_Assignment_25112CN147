/*Write a program to Write function for perfect number*/
#include <iostream>
using namespace std;
void checkperfnum(int n){
     int sum=0;
    for(int i=1 ; i<n;i++){
        if(n%i==0)
        sum+=i;
    }
    if(sum==n && n>0){
    cout<<"The number is a perfect number";
    return;
}
    else {
    cout <<"The number is not a perfect number";
    return ;
}
}

int main() {
     int n;
    cout << "Enter  anumber to check a perfect number : ";
    cin >> n;
    checkperfnum(n);

    return 0;
}