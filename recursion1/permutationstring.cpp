#include<iostream>
#include<vector>
#include<string>
using namespace std;

void permutation(string& str,int i,string ans){
    if(i==str.length()){
        cout<<"["<<ans<<"]"<<" ";
        return;
    }
    permutation(str,i+1,ans+str[i]);
    permutation(str,i+1,ans);
}

int main(){
    string str = "abc";
    string ans = "";
    permutation(str,0,ans);
}