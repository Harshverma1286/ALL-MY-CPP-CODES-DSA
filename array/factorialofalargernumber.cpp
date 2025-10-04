#include<iostream>
using namespace std;

int factorial(int x , int arr[] , int size){
    int carry = 0;
    for(int i=0;i<size;i++){
        int product = arr[i]*x+carry;
        arr[i] = product%10;
        carry = product/10;
    }
    while(carry){
        arr[size] = carry%10;
        carry = carry/10;
        size++;
    }
    return size;
}

int main(){
    int n;
    cout<<"enter the  number to get the factorial of it : ";
    cin>>n;
    int arr[500];
    arr[0]=1;
    int size = 1;

    for(int x = 2;x<=n;x++){
        size = factorial(x,arr,size);

    }

    for(int i=size-1;i>=0;i--){
        cout<<arr[i];
    }
    cout<<endl;
}