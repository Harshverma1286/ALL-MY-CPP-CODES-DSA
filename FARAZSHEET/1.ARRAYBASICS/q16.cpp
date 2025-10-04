#include<iostream>
#include<vector>
using namespace std;

int main(){
    const int capcity = 10;

    int arr[capcity] = {1,2,3,4,5};

    int position = 2;
    int insert = 99;

    int size = 5;

    for(int i=size;i>position;i--){
        arr[i]=arr[i-1];
    }

    arr[position] = insert;


    for(int i=0;i<size+1;i++){
        cout<<arr[i]<<" ";
    }
    
}
