#include<iostream>
using namespace std;

int main(){
    int arr[]={2,1,4,3,6,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    bool flag = false;

    for(int i=0;i<n-1;i++){
        flag = false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = true;
            }
        }
        if(flag==false) break;
    }
    if(flag==false) {
        cout<<"yes array can be easily sorted in one pass";
    }
    else cout<<"no array cannot be sorted in one pass";
}