#include<iostream>
using namespace std;

int powerfunction(int a,int b){
    if(b==1) return a;
    int power = powerfunction(a,b/2);
    if(b%2==0) return power*power;
    else return power*power*a;
}

int main(){
    int a = 2;
    int b = 10;
    cout<<powerfunction(a,b);
}