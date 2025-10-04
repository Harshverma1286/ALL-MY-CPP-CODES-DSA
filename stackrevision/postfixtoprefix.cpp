#include<iostream>
#include<stack>
using namespace std;

string merge(string val1,char op,string val2){
    string ans="";
    ans+=op;
    ans+=val1;
    ans+=val2;
    return ans;
}

string postfixtoinfix(string& str){
    int n = str.length();
    stack<string> st;

    for(int i=0;i<n;i++){
        if(isdigit(str[i])){
            string ans="";
            ans+=str[i];
            st.push(ans);
        }
        else{
            string val2 = st.top();
            st.pop();
            string val1 = st.top();
            st.pop();
            char op = str[i];
            string ans = merge(val1,op,val2);
            st.push(ans);
        }
    }
    return st.top();

}

int main(){
    string str = "79+4*8/3-";

    string ans = postfixtoinfix(str);

    cout<<ans;
}