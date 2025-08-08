#include<iostream>
using namespace std;

int main(){
    int arr[] = {5,8,7,2,0,0,4,0,3};
    int n = sizeof(arr)/sizeof(arr[0]);


    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]==0){
                swap(arr[j],arr[j+1]);
            }
            else{
                continue;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}