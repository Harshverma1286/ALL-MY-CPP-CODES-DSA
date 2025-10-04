#include<iostream>
using namespace std;

int main(){
    int arr[5]={5,4,3,2,1};

    bool isforward = true;
    bool isbackward = true;

    for(int i=1;i<5;i++){
        if(arr[i-1]>arr[i]){
            isforward = false;
        }
        if(arr[i-1]<arr[i]){
            isbackward = false;
        }
    }

    if(isforward==true){
        cout<<"sorted in forward direction";
    }
    else if(isbackward==true){
        cout<<"sorted in backward direction";
    }
    else{
        cout<<"not sorted";
    }
}
