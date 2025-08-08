#include<iostream>
using namespace std;

int main(){
    int arr[]={-5,0,1,7};

    int n = sizeof(arr)/sizeof(arr[0]);

    int m = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-m-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        m++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}