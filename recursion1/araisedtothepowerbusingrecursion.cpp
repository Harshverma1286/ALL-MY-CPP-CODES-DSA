#include<iostream>
using namespace std;

int araisedtothepowerb(int a,int b){
    if(b==0) return 1;
    if(b%2==0) return araisedtothepowerb(a*a,b/2);
    else return a*araisedtothepowerb(a*a,(b-1)/2);
}


int main(){
    int a = 2;
    int b = 2;
    cout<<araisedtothepowerb(a,b);
}