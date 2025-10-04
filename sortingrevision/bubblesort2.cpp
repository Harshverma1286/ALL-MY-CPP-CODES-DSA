#include<iostream>
using namespace std;

int main(){
    int arr[]={5,1,2,3,4};

    int n = sizeof(arr)/sizeof(arr[0]);
    bool flag = true;

    for(int i=0;i<n;i++){
        flag = true;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        if(flag==true){
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}