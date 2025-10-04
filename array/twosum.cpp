#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,4,2,5};
    int target = 3;

    for(int i=0;i<=4;i++){
        for(int j=i+1;i<=4;i++){
            if(arr[i]+arr[j]==target){
                cout<<i<<" "<<j<<endl;
                cout<<arr[i]<<" "<<arr[j];
            }
        }
    }
}