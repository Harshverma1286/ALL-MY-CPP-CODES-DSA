#include<iostream>
using namespace std;


int main(){
    int arr[]={3,8,6,7,5,9,10};

    int n = sizeof(arr)/sizeof(arr[0]);

    int i=0;
    int j = n-1;
    while(i<n-1 && arr[i]<arr[i+1]){
        i++;
    }
    while(j>0 && arr[j]>arr[j-1]){
        j--;
    }

    if(i<j){
        swap(arr[i],arr[j]);
    }


    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}