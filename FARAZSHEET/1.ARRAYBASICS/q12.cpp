#include<iostream>
using namespace std;

int main(){
    int arr[5]={20,30,40,50,60};

    int max = arr[0];

    for(int i=1;i<5;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    cout<<max;
}