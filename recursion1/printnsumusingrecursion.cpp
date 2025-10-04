#include<iostream>
using namespace std;

int printnsum(int n){
    if(n==1) return 1;
    return n+printnsum(n-1);
}

int main(){
    int n = 10;
    cout<<printnsum(n);
}