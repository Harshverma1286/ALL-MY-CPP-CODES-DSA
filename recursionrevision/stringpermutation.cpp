#include<iostream>
#include<string>
#include<vector>
using namespace std;

void permutation(string ans,string str,vector<string>& v){
    if(str.empty()){
        v.push_back(ans);
        return;
    }

    int n = str.length();
    for(int i=0;i<n;i++){
        char ch = str[i];
        string leftstr = str.substr(0,i);
        string rightstr = str.substr(i+1);
        string combinedsubstr = leftstr+rightstr;
        permutation(ans+ch,combinedsubstr,v);
    }
}

int main(){
    string str = "abb";

    string ans ="";

    vector<string> v;

    permutation(ans,str,v);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}