#include<iostream>
using namespace std;

class node{
    public:
    int val;
    node* next;

    node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class stack{
    public:
    node* head;
    int size;

    stack(){
        this->head=NULL;
        size = 0;
    }

    void push(int val){
        node* newnode = new node(val);

        newnode->next = head;
        head = newnode;
        size++;
    }

    void pop(){
        if(size==0){
            cout<<"stack is empty!";
            return;
        }
        head = head->next;
        size--;
    }

    int top(){
        if(head==NULL){
            cout<<"stack is empty";
        }
        return head->val;
    }

    int sizeofstack(){
        return size;
    }
};

int main(){
    stack st;

    st.push(10);
    st.push(20);
    st.push(30);
    cout<<st.top()<<endl;
    cout<<st.sizeofstack();
}