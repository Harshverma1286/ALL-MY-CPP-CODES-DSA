#include<iostream>
using namespace std;

int main(){
    int arr[]={1,3,5,4,3,2,0};

    int n = sizeof(arr)/sizeof(arr[0]);
    int idx = -1;

    for(int i=1;i<=n-2;i++){
        if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
            idx = i;
            break;
        }
    }
    cout<<idx;
}