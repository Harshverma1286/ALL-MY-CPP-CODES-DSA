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
        cout<<st.top()<<" ";
        back.push(st.top());
        st.pop();
    }
    cout<<endl;
    while(back.size()>0){
        st.push(back.top());
        back.pop();
    }
}