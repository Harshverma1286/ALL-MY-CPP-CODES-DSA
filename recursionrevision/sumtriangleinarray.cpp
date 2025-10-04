#include<iostream>
using namespace std;

void sum(int arr[] , int n){
    if(n==1) return;

    for(int  i=1;i<n;i++){
        arr[i-1]=arr[i-1]+arr[i];
    }

    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sum(arr,n-1);
}

int main(){
    int n = 5;
    int arr[n]={5,4,3,2,1};
    int i=0;

    sum(arr,n);
}