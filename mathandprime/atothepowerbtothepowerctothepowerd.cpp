#include<iostream>
using namespace std;

int main(){
    int a = 2;
    int b = 3;
    int c = 2;
    int d = 2;

    long long  ans = 1;
    for(int i=0;i<d;i++){
        ans*=c;
    }
    long long  anotherans = 1;
    for(int i=0;i<ans;i++){
        anotherans*=b;
    }
    long long finalans = 1;
    for(int i=0;i<anotherans;i++){
        finalans*=a;
    }
    cout<<finalans;

}