#include<iostream>
using namespace std;

int main(){
    int arr[8] = {0,6,0,0,6,0,9,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    int i=0;
    int j=n-1;

    while(i<j){
        if(arr[i]==0 && arr[j]!=0){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
        if(arr[i]!=0 && arr[j]!=0){
            i++;
        }
        if(arr[i]!=0 && arr[j]==0){
            i++;
            j--;
        }
        if(arr[i]==0 && arr[j]==0){
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}