#include<iostream>
#include<string>
using namespace std;

void substring(string ans,string str, int idx){
    if(idx==str.length()){
        if(!ans.empty()){
            cout<<ans<<endl;
        }
        return;
    }
    char ch = str[idx];
    if(ans.empty() || ans[ans.length()-1]==str[idx-1]){
        substring(ans+ch,str,idx+1);
    }
    substring(ans,str,idx+1);
}

int main(){
    string str = "xyz";
    string ans ="";
    int idx = 0;
    substring(ans,str,idx);
    return 0;
}