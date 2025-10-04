#include<iostream>
using namespace std;

int main(){
    int arr[] = {3,1,2,5,4,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++){
        int j=i+1;
        int ans = -1;
        while(j<n){
            if(arr[j]>arr[i]){
                ans = arr[j];
                break;
            }
            j++;
        }
        arr[i] = ans;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}