#include<iostream>
using namespace std;

int main(){
    int arr[4] ={1,2,3,4};

    int n = sizeof(arr)/sizeof(arr[0]);

    int i = 0;
    int j = n-1;

    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }
}