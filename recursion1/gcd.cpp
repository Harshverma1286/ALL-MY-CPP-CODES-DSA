#include<iostream>
using namespace std;

int gcd(int& a,int& b,int idx){
    if(idx==0) return 0;
    if(a%idx==0 && b%idx==0) return idx;
    else return gcd(a,b,idx-1);
}

int main(){
    int a = 27;
    int b = 45;
    int idx = min(a,b);
    cout<<gcd(a,b,idx);
}