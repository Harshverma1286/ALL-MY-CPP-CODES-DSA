#include<iostream>
using namespace std;

void present(int arr[],int target,int n,int i){
    if(target==arr[i]){
        cout<<i;
        return;
    }
    if(i>n){
        cout<<-1;
        return;
    }
    present(arr,target,n,i+1);
}

int main(){
    int n = 5;
    int arr[5]={1,2,3,4,5};
    int target = 4;
    int i=0;
    present(arr,target,n,i);
}