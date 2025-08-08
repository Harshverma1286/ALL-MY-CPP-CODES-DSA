#include<iostream>
#include<string>
using namespace std;

int main(){
    int n = 18;
    string ans = "";

    while(n>0){
        if(n%2==0){
            ans = "0"+ans;
        }
        else{
            ans = "1"+ans;
        }
        n/=2;
    }

    cout<<ans;
}