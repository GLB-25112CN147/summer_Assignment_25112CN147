/*Write a program to Print Armstrong numbers in a range.*/
#include <iostream>
using namespace std;
int power(int a , int b){
    if(b==0)
    return 1;
    b--;
    return a*power(a,b);
    
}

int main() {
    int start,end;
    cout << "Enter the range : ";
    cin >> start >> end;
    cout << "The armstrong numbers are : ";
    for(int i = start; i <= end;i++){
        int digits =0,sum=0;
        int temp=i,copy=i;
        while(copy>0){
            digits++;
            copy/=10;
        }
        while(temp>0){
            int r=temp%10;
            sum+=power(r,digits);
            temp/=10;
        }
        if(sum==i){
            cout << sum << " " ;
        }
    }

    return 0;
}
