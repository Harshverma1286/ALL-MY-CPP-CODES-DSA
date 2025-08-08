#include<iostream>
using namespace std;

void binarystringsoflengthn(int& n,string ans){
    if(ans.length()==n){
        cout<<ans<<" ";
        return;
    }
    if(ans.length()==0){
        binarystringsoflengthn(n,ans+'0');
        binarystringsoflengthn(n,ans+'1');
    }
    else{
        if(ans.back()=='1'){
            binarystringsoflengthn(n,ans+'0');
        }
        else{
            binarystringsoflengthn(n,ans+'0');
            binarystringsoflengthn(n,ans+'1');
        }
    }
}

int main(){
    int n=2;
    string ans = "";
    binarystringsoflengthn(n,ans);
}