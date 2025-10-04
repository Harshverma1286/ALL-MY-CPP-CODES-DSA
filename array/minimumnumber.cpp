#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,0,5};

    int minimum = arr[0];

    for(int i=1;i<=4;i++){
        if(minimum>arr[i]){
            minimum = arr[i];
        }
    }
    cout<<minimum;


}