#include<iostream>
#include<stack>
using namespace std;

void print(stack<int> st){
    stack<int> temp;
       while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
      while(temp.size()>0){
        cout<<temp.top()<<endl;
        st.push(temp.top());
        temp.pop();
    }
}

int main(){
     stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    print(st);
    cout<<st.size()<<endl;
     stack<int> temp;
     stack<int> at;

    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }

    while(temp.size()>0){
        at.push(temp.top());
        temp.pop();
    }
    while(at.size()>0){
        st.push(at.top());
        at.pop();
    }
    cout<<endl;
    print(st);

}