#include<iostream>
#include<stack>
using namespace std;

int priority(char ch){
    if(ch=='+' || ch=='-') return 1;
    else return 2;
}

string merge(string val1,char op,string val2){
    string ans = "";
    ans+=op;
    ans+=val1;
    ans+=val2;
    return ans;
}

string infixtoprefix(string& str){
    int n = str.length();
    stack<string> st;
    stack<char> op;

    for(int i=0;i<n;i++){
        if(isdigit(str[i])){
            string ans="";
            ans+=str[i];
            st.push(ans);
        }
        else{
            if(op.empty()) op.push(str[i]);
            else if(!op.empty() && priority(op.top())<priority(str[i])){
                op.push(str[i]);
            }
            else{
                while(!op.empty() && priority(op.top())>=priority(str[i])){
                    string val2 = st.top();
                    st.pop();
                    string val1 = st.top();
                    st.pop();
                    char ch = op.top();
                    op.pop();
                    string ans = merge(val1,ch,val2);
                    st.push(ans);
                }
                op.push(str[i]);
            }
        }
    }

    while(op.size()>0){
        string val2 = st.top();
        st.pop();
        string val1 = st.top();
        st.pop();
        char ch = op.top();
        op.pop();
        string ans = merge(val1,ch,val2);
        st.push(ans);
    }

    return st.top();
}

int main(){
    string str = "2+6*4/8-3";

    string ans = infixtoprefix(str);

    cout<<ans;
}