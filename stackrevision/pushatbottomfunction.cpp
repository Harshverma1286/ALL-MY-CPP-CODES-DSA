#include<iostream>
#include<stack>
using namespace std;

void pushatbottom(stack<int>& st,int val){
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}

void printstack(stack<int> st){
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}

int main(){
    stack<int> st;


    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    printstack(st);

    pushatbottom(st,70);

    printstack(st);

    pushatbottom(st,60);
    printstack(st);


}