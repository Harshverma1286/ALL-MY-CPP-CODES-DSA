#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(){
    string s = "()()()";
    stack<char> st;

    bool flag = true;

    for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if(st.empty()){
                flag = false;
                break;
            }
            else if(st.top()=='('){
                st.pop();
            }
        }
    }
    if(flag==true){
        cout<<"yes it is balanced!";
    }
    else{
        cout<<"it is not balanced!";
    }
}