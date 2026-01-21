#include<iostream>
#include<stack>
using namespace std;

void midele(stack<int>& st,int& mid){
    if(st.size()==mid){
        st.pop();
        return;
    }
    int val = st.top();
    st.pop();
    midele(st,mid);
    st.push(val);
}

void print(stack<int>& st){
    stack<int> temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

    int mid;
    if(st.size()%2==0){
        mid = st.size()/2;
    }
    else mid = (st.size()/2) + 1;

    midele(st,mid);
    print(st);
}