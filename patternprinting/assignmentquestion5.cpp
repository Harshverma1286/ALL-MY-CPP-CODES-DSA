#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int nst = 1;
    int nsp = n-1;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=nst;j++){
            cout<<"*"<<" ";
        }
        if(i>=n){
            nst-=1;
        }
        else nst+=1;
        for(int k=1;k<=nsp;k++){
            cout<<" "<<" ";
        }
        if(i>=n){
            nsp+=2;
        }
        else nsp-=2;
        cout<<endl;
    }
}