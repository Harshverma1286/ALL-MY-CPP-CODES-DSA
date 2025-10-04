#include<iostream>
using namespace std;

int main(){
    int n = 6;
    int arr[n] = {1,2,1,3,2,1};

    int target = 4;

    bool flag = false;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;j<n;j++){
                if(arr[i]+arr[j]+arr[k]==target){
                    flag = true;
                    break;
                }
            }
        }
    }
    if(flag==true){
        cout<<"it exits";
    }
    else{
        cout<<"it does not exits";
    }

}