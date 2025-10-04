#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;

    stack<int> back;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    while(st.size()>0){
        back.push(st.top());
        st.pop();
    }
    while(back.size()>0){
        cout<<back.top()<<" ";
        st.push(back.top());
        back.pop();
    }
}