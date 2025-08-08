#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    stack<int> temp;
    stack<int> anothertemp;
    cout<<st.top()<<endl;


    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }

    while(temp.size()>0){
        anothertemp.push(temp.top());
        temp.pop();
    }

    cout<<anothertemp.top()<<endl;
}