#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int arr[]={7,10,4,3,20,15};

    int k = 3;

    int n= sizeof(arr)/sizeof(arr[0]);

    int count = 0;
    int idx =-1;

    int min = INT_MAX;

    for(int i=0;i<n;i++){
        if(count==k){
            cout<<min;
            break;
        }
        min = INT_MAX;
        for(int j=i+1;j<n;j++){
            if(min>arr[j]){
                min=arr[j];
                idx = j;
            }
        }
        swap(arr[i],arr[idx]);
        count++;
    }
}