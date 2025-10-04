#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;

    int val = 0;
    int pw=1;

    while(s.size()){
        val+=pw*(s.back()-'0');
        s.pop_back();
        pw*=10;
    }
    cout<<val;
}