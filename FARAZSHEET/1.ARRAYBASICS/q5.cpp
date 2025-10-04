#include<iostream>
using namespace std;

int main(){
    int arr[6]={1,2,3,4,5,6};

    int n = sizeof(arr)/sizeof(arr[0]);

    int brr[n/2];

    int crr[n/2];

    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            crr[i/2] = arr[i];
        }
        else{
            brr[i/2] = arr[i];
        }
    }
    for(int i=0;i<n/2;i++){
        cout<<brr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n/2;i++){
        cout<<crr[i]<<" ";
    }
}