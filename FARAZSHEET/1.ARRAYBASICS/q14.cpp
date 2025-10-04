#include<iostream>
using namespace std;

int main(){
    int arr[6] ={10,20,30,40,50,60};

    int max =0;
    int smax =0;

    for(int i=0;i<6;i++){
        if(max<arr[i]){
            smax = max;
            max=arr[i];
        }
        else if(smax<arr[i]){
            smax = arr[i];
        }
    }
    if(smax==max){
        cout<<-1;
    }
    else{
        cout<<smax;
    }
}