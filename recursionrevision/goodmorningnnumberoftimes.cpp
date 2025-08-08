#include<iostream>
using namespace std;


void nnumberoftimes(int n){
    if(n==0) return;

    cout<<"good morning"<<endl;

    nnumberoftimes(n-1);
}

int main(){
    int n;
    cin>>n;

    nnumberoftimes(n);
}