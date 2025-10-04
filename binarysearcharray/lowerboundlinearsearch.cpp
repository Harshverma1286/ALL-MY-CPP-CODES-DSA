#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,4,5,9,15,18,21,24};

    int n = sizeof(arr)/sizeof(arr[0]);

    int target = 20;

    for(int i=0;i<n;i++){
        if(target<arr[i]){
            cout<<" lower bound   : "<<arr[i-1];
            break;
        }
    }
}