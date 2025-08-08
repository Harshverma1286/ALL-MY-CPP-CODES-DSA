#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<int> st;
    stack<int> temp;
    stack<int> reversetemp;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()>0){
        reversetemp.push(temp.top());
        temp.pop();
    }
    while(reversetemp.size()>0){
        st.push(reversetemp.top());
        reversetemp.pop();
    }

    cout<<st.top();
}