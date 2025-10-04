#include<iostream>
using namespace std;

int main(){
    int arr[6] = {10,11,12,17,14,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int evensum = 0;
    int oddsum = 0;
    int difference = 0;

    for(int i=0;i<=n-1;i++){
        if(arr[i]%2==0){
            evensum+=arr[i];
        }
        else{
            oddsum+=arr[i];
        }
    }
    difference = evensum-oddsum;
    cout<<difference;
}