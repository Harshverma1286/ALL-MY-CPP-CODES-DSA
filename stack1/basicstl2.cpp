#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.size()<<endl;

    // print the stack in reverse order 

    // while(st.size()>0){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    // to not make a atck empty we will store the values in other stack and after that we will put the store value in the original stack
     stack<int> temp;

    while(st.size()>0){
        cout<<st.top()<<endl;
        // int x = st.top();
        temp.push(st.top());
        st.pop();
    }
    // putting elements back from temp to st

    while(temp.size()>0){
        cout<<temp.top()<<endl;
        st.push(temp.top());
        temp.pop();
        // st.push(x);
    }


}