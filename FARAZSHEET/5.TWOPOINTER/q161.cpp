#include<iostream>
#include<vector>
using namespace std;

vector<int> distringmatch(string s){
    int n = s.length();
    vector<int> ans(n+1);

    int ic =0;
    int dc = n;

    for(int i=0;i<s.length();i++){
        char ch = s[i];
        if(ch=='I'){
            ans[i] = ic;
            ic++;
        }
        else{
            ans[i] = dc;
            dc--;
        }
    }
    if(ic==dc){
        ans[n] = dc;
    }
    return ans;
}

int main(){
    string s = "IDID";

    vector<int> ans = distringmatch(s);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}