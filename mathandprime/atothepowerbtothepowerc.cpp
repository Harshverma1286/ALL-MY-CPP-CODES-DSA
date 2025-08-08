#include<iostream>
using namespace std;

int main(){
    int a = 5;
    int b = 4;
    int c = 3;


    long long ans = 1;
    long long  finalans = 1;

    for(int i=0;i<c;i++){
        ans*=b;
    }
    for(int i=0;i<ans;i++){
        finalans*=a;
    }

    cout<<finalans;
}