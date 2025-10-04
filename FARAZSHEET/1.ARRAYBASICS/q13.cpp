#include<iostream>
using namespace std;

int main(){
    int arr[5]={20,30,40,50,60};

    int min = arr[0];

    for(int i=0;i<5;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    cout<<min;
}