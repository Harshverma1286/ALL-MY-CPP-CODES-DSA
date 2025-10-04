#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

bool isprime(int n){
    if(n==1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}

int countprimes(int n){
    vector<bool> array(n,true);

    for(int i=1;i<=sqrt(n);i++){
        if(isprime(i)){
            int j=i*i;
            while(j<array.size()){
                array[j]=false;
                j+=i;
            }
        }
    }
    int count = 0;
    for(int i=2;i<array.size();i++){
        if(array[i]==true){
            count++;
        }
    }
    return count;
}

int main(){
    int n = 10;
    cout<<countprimes(n);
}