#include<iostream>
using namespace std;

int main(){
    int n = 7;

    int arr[n+1] = {6,1,2,4,3,2,7,4};

    bool flag = false;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                flag = true;
                break;
            }
        }
    }
    if(flag== true){
        cout<<"array contains duplicate elements";
    }
    else{
        cout<<"array does not contain duplicate elements";
    }
}