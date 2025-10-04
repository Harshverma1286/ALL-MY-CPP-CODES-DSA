#include<iostream>
using namespace std;

class stack{
    public:
    int arr[5];
    int idx;

    stack(){
        idx=-1;
    }

    void push(int val){
        if(idx==(sizeof(arr)/sizeof(arr[0]))-1){
            cout<<"stack is full!";
            return;
        }
        idx++;
        arr[idx] = val;
    }

    void pop(){
        if(idx==-1){
            cout<<"stack is empty";
            return;
        }
        else{
            idx--;
        }
    }

    int size(){
        if(idx==-1){
            return -1;
        }
        return idx+1;
    }

    int top(){
        if(idx==-1){
            return -1;
        }
        return arr[idx];
    }
};

int main(){

    stack st;
    st.push(10);
    st.push(20);
    cout<<st.top();
    st.pop();
    cout<<st.size();
    

}