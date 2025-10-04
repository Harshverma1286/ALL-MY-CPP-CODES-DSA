#include<iostream>
using namespace std;

int main(){
    int n ;
    cin>>n;
    bool flag = false;
    for(int i=2;i<=n;i++){
        if(n%2==0){
            flag=true;
        }
    }
    if(n==1){
        cout<<"it is not a prime";
    }
    else if(flag==false){
        cout<<"it is a prime number";
    }
    else{
        cout<<"it is not a prime number";
    }
}