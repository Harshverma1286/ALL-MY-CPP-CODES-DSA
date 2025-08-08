#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void display(queue<int>& q){
    int size = q.size();
    for(int i=0;i<size;i++){
        int value = q.front();
        cout<<value<<" ";
        q.pop();
        q.push(value);
    }
}

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    stack<int> st;

    while(q.size()>0){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }

    display(q);
}