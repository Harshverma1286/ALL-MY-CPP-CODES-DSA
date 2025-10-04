#include<iostream>
#include<stack>
using namespace std;

void removekthelement(int k,stack<int>& st){
    stack<int> st2;
    k--;
    while(k--){
        st2.push(st.top());
        st.pop();
    }
    st.pop();
    while(st2.size()>0){
        st.push(st2.top());
        st2.pop();
    }
}

void print(stack<int> st){
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    removekthelement(3,st);

    print(st);
}