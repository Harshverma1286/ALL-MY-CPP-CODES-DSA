#include<iostream>
using namespace std;

int gcd(int a,int b){
    int rem = b%a;
    if(rem==0)return a;
    else return gcd(b%a,a);
}

int main(){
    int a=10000;
    int b=10001;
    int i = min(a,b);
    cout<<gcd(a,b);
}