#include<iostream>
using namespace std;

int main(){
    int arr[] = {7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;

    int prevsum =0;
    for(int i=0;i<k;i++){
        prevsum+=arr[i];
    }
    int maxsum = prevsum;
    int currsum =0;

    int i = 1;
    int j = k;
    while(j<n){
        currsum = prevsum+arr[j]-arr[i-1];

        if(maxsum<prevsum){
            maxsum = prevsum;
        }
        prevsum = currsum;
        i++;
        j++;
    }

    cout<<maxsum;
}