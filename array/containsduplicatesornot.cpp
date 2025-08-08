#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,1,4,5};
    bool flag = false;
    for(int i=0;i<=4;i++){
        for(int j=i+1;j<=4;j++){
            if(arr[i]==arr[j]){
                flag = true;
                cout<<arr[i]<<" ";
            }
        }
    }
    if(flag == false){
        cout<<"it does not contains duplicates";
    }
    else{
        cout<<" contains duplicates";
    }
}