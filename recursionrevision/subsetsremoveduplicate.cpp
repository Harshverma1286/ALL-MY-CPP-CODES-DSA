#include<iostream>
#include<vector>
#include<string>
using namespace std;

void subduplicate(string ans,string str,vector<string>& v,bool flag){
    if(str==""){
        v.push_back(ans);
        return;
    }
    char ch = str[0];
    if(str.length()==1){
        if(flag==true)subduplicate(ans+ch,str.substr(1),v,true);
        subduplicate(ans,str.substr(1),v,true);
        return;
    }
    char dp = str[1];
    if(ch==dp){
        if(flag==true)subduplicate(ans+ch,str.substr(1),v,true);
        subduplicate(ans,str.substr(1),v,false);
    }
    else{
        if(flag==true) subduplicate(ans+ch,str.substr(1),v,true);
        subduplicate(ans,str.substr(1),v,true);
    }
}

int main(){
    string str ="aab";
    vector<string> v;

    string ans = "";

    subduplicate(ans,str,v,true);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

