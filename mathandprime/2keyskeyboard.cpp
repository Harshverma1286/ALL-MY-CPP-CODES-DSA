#include<iostream>
#include<cmath>
using namespace std;

bool isprime(int n){
    if(n==1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}

int gcd(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return n/i;
    }
    return 1;
}


int minsteps(int n){
    int count = 0;
    while(n>1){
        if(isprime(n)){
            count+=n;
            break;
        }
        int hcf = gcd(n);
        count+=(n/hcf);
        n = hcf;
    }
    return count;
}

int main(){
    int n = 20;

    cout<<minsteps(n);
}