#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,5,2,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    int i=0;
    int correctidx =0;
    
    while(i<n){
        correctidx = arr[i]-1;
        if(i==correctidx) i++;
        else swap(arr[i],arr[correctidx]);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}