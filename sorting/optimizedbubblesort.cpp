#include<iostream>
using namespace std;

int main(){
    int arr[]={1,5,8,3,2,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n-1;i++){
        bool flag = true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        if(flag==true) break;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    

}