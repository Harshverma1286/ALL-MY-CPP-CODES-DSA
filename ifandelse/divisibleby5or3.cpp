#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    if(x%5==0 || x%3==0){
        cout<<"it is divisible by 5 or 3";
    }
    else{
        cout<<"it is not divisible by 5 or 3";
    }
}