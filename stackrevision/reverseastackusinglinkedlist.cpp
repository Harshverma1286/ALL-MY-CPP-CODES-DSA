#include<iostream>
#include<stack>
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

void printll(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){

    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    cout<<st.top()<<endl;

    node* dummy = new node(100);
    node* tempc = dummy;

    while(st.size()>0){
        node* newnode = new node(st.top());
        tempc->next = newnode;
        tempc = tempc->next;
        st.pop();
    }
    tempc = dummy->next;
    while(tempc!=NULL){
        st.push(tempc->val);
        tempc = tempc->next;
    }
    cout<<st.top()<<" ";

    cout<<endl;

    printll(dummy->next);



}