#include<iostream>
using namespace std;

int gcd(int a,int b){
    if(b%a==0) return a;
    int val = b/a;
    int ans = b - (a*val);
    int anotherans = a;
    return gcd(ans,anotherans);
}

int main(){
    int a = 10000;
    int b = 10001;

    cout<<gcd(a,b);
}