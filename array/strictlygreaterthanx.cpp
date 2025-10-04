#include<iostream>
using namespace std;

int main(){
    int arr[5] = {20,22,23,24,25};
    int x = 24;
    int count = 0;

    for(int i=0;i<=5;i++){
        if(x<arr[i]){
            count++;
        }
    }
    cout<<count;
}