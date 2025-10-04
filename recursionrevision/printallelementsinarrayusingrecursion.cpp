#include<iostream>
using namespace std;

void printelements(int arr[],int i){
    int n = 5;
    if(i>=n) return;
    cout<<arr[i]<<" ";
    printelements(arr,i+1);
}

int main(){
    int n = 5;
    int arr[n] ={1,2,3,4,5};
    int i=0;

    printelements(arr,i);
}