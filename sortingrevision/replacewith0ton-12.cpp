#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main(){
    int arr[] ={19,12,23,8,16};

    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> ans(n,0);

    int number = 0;

    for(int i=0;i<n;i++){
        int min = INT_MAX;
        int minidx = 0;
        for(int j=0;j<n;j++){
            if(ans[j]==1) continue;
            else{
                if(min>arr[j]){
                    min=arr[j];
                    minidx = j;
                }
            }
        }
        arr[minidx] = number;
        ans[minidx] = 1;
        number++;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}