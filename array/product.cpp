#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    int product = 1;
    for(int i=1;i<=4;i++){
        product*=arr[i];
    }
    cout<<product;
}