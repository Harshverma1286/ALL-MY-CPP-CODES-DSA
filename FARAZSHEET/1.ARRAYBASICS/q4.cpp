#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int brr[n];

    for(int i=0;i<n;i++){
        brr[i] = arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<n;i++){
        cout<<brr[i]<<" ";
    }
}