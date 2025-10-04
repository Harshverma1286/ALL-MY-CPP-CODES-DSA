#include<iostream>
using namespace std;

int main(){
    int arr[6] = {2,3,4,5,6,7};
    bool flag = false;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<=n-1;i++){
        for(int j=i+1;j<=n-1;j++){
            if(arr[i]>arr[j]){
                flag = true;
                break;
            }
        }
    }
    if(flag==false){
        cout<<"array is  sorted";
    }
    else{
        cout<<"array is not sorted";
    }

}