#include<iostream>
#include<queue>
#include<stack>
using namespace std;

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);

    int n = q.size()/2;
    stack<int> st;

    int value = n;
    while(value>0){
        st.push(q.front());
        q.pop();
        value--;
    }

    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }

    value = n;

    while(value>0){
        st.push(q.front());
        q.pop();
        value--;
    }

    while(st.size()>0){
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }

    while(q.size()>0){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }

    int size = q.size();
    for(int i=0;i<size;i++){
        int value = q.front();
        cout<<value<<" ";
        q.push(value);
        q.pop();
    }


    
}