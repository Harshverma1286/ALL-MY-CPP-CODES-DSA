#include<iostream>
using namespace std;

int stairpath(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 3;
    return stairpath(n-1)+stairpath(n-2)+stairpath(n-3);
}

int main(){
    int n = 5;
    cout<<stairpath(n);
}