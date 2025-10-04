#include<iostream>
#include<string>
using namespace std;

string removea(string str,string ans,int i){
    int n = str.length();
    if(i>=n) return ans;
    if(str[i]!='a') ans+=str[i];

    return removea(str,ans,i+1);
    

}

int main(){
    string str ="raghav garg";
    string ans="";
    int i=0;

    cout<<removea(str,ans,i);
}