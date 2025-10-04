#include<iostream>
using namespace std;

void goodmorning(int n){
    if(n==0) return ;
    cout<<"good morning"<<endl;
    goodmorning(n-1);
}

int main(){
    int n = 10;
    goodmorning(n);
}