#include<iostream>
using namespace std;

class stack{
    public:
    int arr[5];
    int idx;

    stack(){
        idx = -1;
    }

    void push(int val){
        if(idx = sizeof(arr)/sizeof(arr[0])-1){
            cout<<"stack is full!"<<endl;
        }
        idx++;
        arr[idx] = val;
    }

    void pop(){
        if(idx==-1){
            cout<<"stack is empty!"<<endl;
        }
        idx--;
    }

    int top(){
              if(idx==-1){
            cout<<"stack is empty!"<<endl;
        }
        return arr[idx];
    }

    int size(){
        return idx+1;
    }

};

int main(){
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.pop();
    cout<<st.size();
    cout<<endl;
    cout<<st.top();

}