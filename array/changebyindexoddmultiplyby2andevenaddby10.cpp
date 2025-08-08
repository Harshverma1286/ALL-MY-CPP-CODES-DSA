#include<iostream>
using namespace std;

int main(){
    int arr[6]={10,11,12,13,14,16};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<=n-1;i++){
        if(i%2!=0){
            arr[i]*=2;
        }
        else{
            arr[i]+=10;
        }
    }
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
}