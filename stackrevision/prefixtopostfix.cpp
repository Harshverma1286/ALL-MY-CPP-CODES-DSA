#include<iostream>
#include<stack>
using namespace std;

string merge(string val1,char op,string val2){
    string ans="";
    ans+=val1;
    ans+=val2;
    ans+=op;
    return ans;
}

string prefixtopostfix(string& str){
    int n = str.length();
    stack<string> st;

    for(int i=n-1;i>=0;i--){
        if(isdigit(str[i])){
            string ans="";
            ans+=str[i];
            st.push(ans);
        }
        else{
            string val1 = st.top();
            st.pop();
            string val2 = st.top();
            st.pop();
            char op = str[i];
            string ans = merge(val1,op,val2);
            st.push(ans);
        }
    }
    return st.top();

}

int main(){
    string str = "-/*+79483";

    string ans = prefixtopostfix(str);

    cout<<ans;
}