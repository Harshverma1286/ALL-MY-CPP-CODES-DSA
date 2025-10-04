#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;

    int arr[5] = {20,22,24,25,26};
    int count = 0;

    for(int i=0;i<=4;i++){
        if(arr[i]>x){
            count++;
        }
    }
    cout<<count;
}