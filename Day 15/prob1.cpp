#include <iostream>
using namespace std;

int main() {
    int temp;
    int n;
    cout <<"Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements : ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Your array is : ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Your reverse array is : ";
    int k=0,j=n-1;
    while(k<=j){
        temp = arr[k];
        arr[k]=arr[j];
        arr[j]=temp;
        j--;k++;
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}