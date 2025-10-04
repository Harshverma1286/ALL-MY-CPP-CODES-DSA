#include<iostream>
#include<stack>
using namespace std;

void removeduplicates(string s){
    stack<int> st;
    st.push(s[0]);
    for(int i=1;i<s.length();i++){
        if(s[i]!=st.top()){
            st.push(s[i]);
        }
    }
     s = "";
        while(st.size()>0){
            s+=st.top();
            st.pop();
        }


}

int main(){
    string s = "aaabbccddeefgh";
    removeduplicates(s);
}