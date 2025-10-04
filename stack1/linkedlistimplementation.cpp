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
        head = NULL;
        size = 0;
    }

    void push(int val){
        node* temp = new node(val);
        temp->next = head;
        head = temp;
        size++;
    }

    void pop(){
        if(head == NULL){
            cout<<" stack is empty!";
        }
        head = head->next;
        size--;
    }
    int top(){
          if(head == NULL){
            cout<<" stack is empty!";
        }
        return head->val;
    }
    void print(node* temp){
        if(temp==NULL){
            return;
        }
        print(temp->next);
        cout<<temp->val<<endl;
    }

    void display(){
        node* temp = head;
        print(temp);
        cout<<endl;

    }

};

int main(){
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.size;
    st.pop();
    cout<<st.size;
    cout<<endl;
    st.display();

    

}