#include<iostream>
using namespace std;

int main(){
    int arr[] ={1,2};
    int brr[] = {4,3,5,5};

    int n = sizeof(arr) / sizeof(arr[0]);
    int m = sizeof(brr) / sizeof(brr[0]);

    bool flag = false;


    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i]==brr[j]){
                flag=true;
                break;
            }
        }
    }
    if(flag == true){
        cout<<"array is a subset";
    }
    else{
        cout<<"array is not a subset of brr";
    }
}