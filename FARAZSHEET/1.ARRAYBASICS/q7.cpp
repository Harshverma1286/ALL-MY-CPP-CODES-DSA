#include<iostream>
using namespace std;

int main(){
    int n = 7;
    int arr[n] = {1,2,3,4,3,2,1};
    int targetnumber = 4;

    int count=0;

    for(int i=0;i<n;i++){
        if(arr[i]==targetnumber){
            count++;
        }
    }
    cout<<count;
}