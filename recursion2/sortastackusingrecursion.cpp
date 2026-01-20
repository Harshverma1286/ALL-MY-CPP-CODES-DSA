#include<iostream>
#include<stack>
using namespace std;

void insert(stack<int>& st,int temp){
    if(st.size()==0 || st.top()>=temp){
        st.push(temp);
        return;
    }
    int val = st.top();
    st.pop();
    insert(st,temp);
    st.push(val);
}

void sortstack(stack<int>& st){
    if(st.size()==1) return;

    int temp = st.top();
    st.pop();
    sortstack(st);
    insert(st,temp);
}

void printstack(stack<int>& st){
    stack<int> temp;
    while(st.size()>0){
        int val = st.top();
        cout<<val<<" ";
        st.pop();
        temp.push(val);
    }
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}

int main(){
    stack<int> st;
    st.push(9);
    st.push(2);
    st.push(4);
    st.push(1);
    st.push(5);
    sortstack(st);

    printstack(st);
}