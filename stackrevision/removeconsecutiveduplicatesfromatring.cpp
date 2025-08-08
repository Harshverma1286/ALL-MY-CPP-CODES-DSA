#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
    string s = "aaabbcddaabffg";

    stack<char> st;

    string ans = "";

    for(int i=0;i<s.length();i++){
        if(st.empty()){
            st.push(s[i]);
            ans+=s[i];
        }
        else if(st.top()==s[i]){
            continue;
        }
        else if(st.top()!=s[i]){
            st.push(s[i]);
            ans+=s[i];
        }
    }
    cout<<ans;
}