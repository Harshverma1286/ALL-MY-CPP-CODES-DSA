#include<iostream>
#include<stack>
using namespace std;

void printstack(stack<int> st){
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}

void pushatanyindex(stack<int>& st,int val,int idx){
    stack<int> temp;

    for(int i=1;i<=idx;i++){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}

int main(){
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(40);
    st.push(50);
    st.push(60);

    printstack(st);

    pushatanyindex(st,30,3);

    printstack(st);

    pushatanyindex(st,80,2);

    printstack(st);


}