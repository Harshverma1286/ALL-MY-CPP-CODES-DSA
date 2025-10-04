#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,4,5,3,2,7,6};

    int n = sizeof(arr)/sizeof(arr[0]);

    int prefixsum[n];

    prefixsum[0]=arr[0];

    for(int i=1;i<n;i++){
        prefixsum[i]=prefixsum[i-1]+arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<prefixsum[i]<<" ";
    }
}