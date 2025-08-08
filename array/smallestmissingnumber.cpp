#include<iostream>
using namespace std;

int main(){
    int arr[4] = {1,2,4,5};
    int count = arr[0];
    for(int i=0;i<=3;i++){
        while(count<arr[i] ){
            cout<<count<<" ";
            count++;
        }
        if(count==arr[i]){
            count++;
        }
    }
}