#include<iostream>
using namespace std;

void removealloccurences(string& str,int i,string& ans){
    if(i>=str.length()){
        cout<<ans;
        return;
    }
    if(str[i]!='a') removealloccurences(str,i+1,ans+=str[i]);
    else removealloccurences(str,i+1,ans);
}

int main(){
    string str = "Raghav Garg";
    string ans = "";
    removealloccurences(str,0,ans);
    //cout<<ans;
}