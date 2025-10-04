#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,4,5,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    int correctposition = 0;

    for(int i=0;i<n;i++){
        correctposition = arr[i]-1;
        if(arr[i]!=arr[correctposition]){
                swap(arr[i],arr[correctposition]);
        }
        else continue;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}