#include<iostream>
using namespace std;

int main(){
    int arr[]={5,1,2,5,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    int count = 0;

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            continue;
        }
        count++;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                arr[j]=0;
            }
        }
    }

    cout<<count;
}