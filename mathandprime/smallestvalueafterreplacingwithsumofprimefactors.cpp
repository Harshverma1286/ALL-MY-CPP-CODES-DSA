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

int smallestvalue(int n){
    if(isprime(n)) return n;
    if(n==4) return 4;
    int sum = 0;

    for(int i=1;i<sqrt(n);i++){
        if(n%i==0 && isprime(i)){
            int m = n;
            while(m%i==0){
                sum+=i;
                m/=i;
            }
        }
    }
    for(int i=sqrt(n);i>=1;i--){
        if(n%(n/i)==0 && isprime(n/i)){
            int m = n;
            while(m%(n/i)==0){
                sum+=n/i;
                m/=n/i;
            }
        }
    }
    return smallestvalue(sum);
}

int main(){
    int n = 15;

    cout<<smallestvalue(n);
}