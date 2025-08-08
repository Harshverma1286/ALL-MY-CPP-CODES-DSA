#include<iostream>
#include<stack>
using namespace std;

int evaluate(int value1,int value2,char op){
    if(op=='+') return value1+value2;
    else if(op=='-') return value1-value2;
    else if(op=='*') return value1*value2;
    else return value1/value2; 
}

int postfixevaluation(string& str){
    int n = str.length();
    stack<int> st;
    stack<char> op;

    for(int i=0;i<str.length();i++){
        if(isdigit(str[i])){
            int val = str[i]-'0';
            st.push(val);
        }
        else{
            op.push(str[i]);
            while(!op.empty()){
                int val2 = st.top();
                st.pop();
                int val1 = st.top();
                st.pop();
                char ch = op.top();
                op.pop();
                int ans = evaluate(val1,val2,ch);
                st.push(ans);
            }
        }
    }

    return st.top();
}

int main(){
    string str = "79+4*8/3-";

    int ans = postfixevaluation(str);

    cout<<ans;
}