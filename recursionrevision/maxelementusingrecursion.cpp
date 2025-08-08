#include<iostream>
using namespace std;

void maxelement(int arr[],int i,int max){
    int n = 5;
    if(i==n){
        cout<<max<<" ";
        return;
    } 
    if(max<arr[i]){
        max = arr[i];
    }

    maxelement(arr,i+1,max);
}

int main(){
    int n = 5;
    int arr[n] ={1,2,3,4,5};

    int max = arr[0];
    maxelement(arr,1,max);
}