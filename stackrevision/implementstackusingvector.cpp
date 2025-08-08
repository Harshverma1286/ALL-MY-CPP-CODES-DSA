#include<iostream>
#include<vector>
using namespace std;

class stack{
    public:
    vector<int> arr;

    void push(int val){
        arr.push_back(val);
    }

    void pop(){
        if(arr.size()==0){
            cout<<"stack is empty!";
            return;
        }
        arr.pop_back();
    }

    int size(){
        if(arr.size()==0){
            cout<<"stack is empty!";
            return -1;
        }
        return arr.size();
    }

    int top(){
        return arr[arr.size()-1];
    }
};

int main(){
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout<<st.size();
    cout<<endl;
    cout<<st.top();
    st.pop();
    cout<<endl;
    cout<<st.top();

}