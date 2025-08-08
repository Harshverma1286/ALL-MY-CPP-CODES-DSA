#include<iostream>
#include<stack>
using namespace std;


void printstack(stack<int> st){
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
}

void pushatbottom(stack<int>& st,int val){
    if(st.size()==0){
        st.push(val);
        return ;
    }
    int x = st.top();
    st.pop();
    pushatbottom(st,val);
    st.push(x);
}

void reversestack(stack<int>& st){
    if(st.size()==1) return;
    int x = st.top();
    st.pop();
    reversestack(st);
    pushatbottom(st,x);
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    printstack(st);
    cout<<endl;

    printstack(st);

    cout<<endl;

    reversestack(st);

    printstack(st);
}