#include<iostream>
#include<stack>
using namespace std;

int evaluate(int value1,int value2,char op){
    if(op=='+') return value1+value2;
    else if(op=='-') return value1-value2;
    else if(op=='*') return value1*value2;
    else return value1/value2; 
}


int prefixevaluation(string& str){
    int n = str.length();
    stack<int> st;

    for(int i=n-1;i>=0;i--){
        if(isdigit(str[i])){
            int ans = str[i]-'0';
            st.push(ans);
        }
        else{
            int val1 = st.top();
            st.pop();
            int val2 = st.top();
            st.pop();
            char op = str[i];
            int ans = evaluate(val1,val2,op);
            st.push(ans);
        }
    }
    return st.top();
}

int main(){
    string str = "-/*+79483";

    int ans = prefixevaluation(str);

    cout<<ans;
}