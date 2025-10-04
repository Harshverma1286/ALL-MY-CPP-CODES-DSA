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

void pushatbottom(stack<int>& st , int val){
    if(st.size()==0){
        st.push(val);
        return ;
    }
    int x = st.top();
    st.pop();
    pushatbottom(st,val);
    st.push(x);
}

void reverse(stack<int>& st){
    if(st.size()==1){
        return ;
    }
    int x = st.top();
    st.pop();
    reverse(st);
    pushatbottom(st,x);

}



int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st);
    cout<<endl;
    reverse(st);
    cout<<endl;
    print(st);
}