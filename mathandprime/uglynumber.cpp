#include<iostream>
using namespace std;

bool isugly(int n){
    while(n>1){
        if(n%2==0){
            n/=2;
        }
        else if(n%3==0){
            n/=3;
        }
        else if(n%5==0){
            n/=5;
        }
    }
    if(n==1) return true;
    else return false;
}

int main(){
    int n = 6;

    bool ans = isugly(n);

    if(ans==true) cout<<"TRUE";
    else cout<<"FALSE";
}