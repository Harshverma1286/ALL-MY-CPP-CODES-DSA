#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int arr[]={8,2,1,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    int i=0;
    int j = n-1;
    while(i<=j){
        int value = 0;
        int min = INT_MAX;
        for(int k=i;k<j+1;k++){
            if(arr[k]<min){
                min=arr[k];
                value = k;
            }
        }
        swap(arr[i],arr[value]);
        i++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}