#include<iostream>
#include<stack>
using namespace std;

bool checkthestr(char ch){
    if(ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='(' || ch==')') return false;
    else return true;
}

int priority(char ch){
    if(ch=='+' || ch=='-') return 1;
    else return 2;
}

int evaluate(int value1,int value2,char op){
    if(op=='+') return value1+value2;
    else if(op=='-') return value1-value2;
    else if(op=='*') return value1*value2;
    else return value1/value2; 
}

int infixevaluation(string& str){
    int n = str.length();

    stack<int> st;
    stack<char> op;

    for(int i=0;i<str.length();i++){
        char ch = str[i];
        bool check = checkthestr(ch);
        if(check==true){
            int val = str[i]-'0';
            st.push(val);
        }
        else{
            char ans = str[i];
            if(op.empty()){
                op.push(ans);
            }
            else if(str[i]=='(') op.push(str[i]);
            else if(op.top()=='(') op.push(str[i]);
            else if(str[i]==')'){
                while(op.top()!='('){
                    int val2 = st.top();
                    st.pop();
                    int val1 = st.top();
                    st.pop();
                    char oper = op.top();
                    op.pop();
                    int ans = evaluate(val1,val2,oper);
                    st.push(ans);
                }
                op.pop();
            }
            else if(priority(op.top())<priority(str[i])){
                op.push(str[i]);
            }
            else{
                while(op.size()>0 && priority(op.top())>=priority(str[i])){
                    int value2 = st.top();
                    st.pop();
                    int value1 = st.top();
                    st.pop();
                    char topop = op.top();
                    op.pop();
                    int ans = evaluate(value1,value2,topop);
                    st.push(ans);
                }
                op.push(str[i]);
            }
        }
    }

    while(op.size()>0){
        int val2 = st.top();
        st.pop();
        int val1 = st.top();
        st.pop();
        char topop = op.top();
        op.pop();
        int ans = evaluate(val1,val2,topop);
        st.push(ans);
    }
    return st.top();
}

int main(){
    string str = "2+(6*4)/8-3";

    int ans = infixevaluation(str);

    cout<<ans;
}