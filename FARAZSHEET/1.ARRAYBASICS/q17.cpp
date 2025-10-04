#include<iostream>
using namespace std;

int main(){
    int n = 5;

    int arr[n]={1,2,3,4,5};

    int size = n;
    int position = 2;
    int i=0;

   for(int i=position;i<size-1;i++){
        arr[i]=arr[i+1];
   }

   size--;

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}