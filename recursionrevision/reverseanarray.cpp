#include<iostream>
using namespace std;

void reversearray(int arr[],int i,int j){
    if(i>j) return;
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;
    reversearray(arr,i,j);
}

int main(){
    int n = 5;
    int arr[5]={1,2,3,4,5};
    int i=0;
    int j = n-1;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    reversearray(arr,i,j);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}