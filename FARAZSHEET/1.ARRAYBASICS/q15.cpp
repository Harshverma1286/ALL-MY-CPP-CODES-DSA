#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int arr[6] = {10,20,30,40,50,60};

    int min = INT_MAX;

    int smin = INT_MAX;

    for(int i=0;i<6;i++){
        if(min>arr[i]){
            min = arr[i];
        }
        else if(smin>arr[i]){
            smin=arr[i];
        }
    }
    if(smin==min){
        cout<<-1;
    }
    else{
        cout<<smin;
    }
}