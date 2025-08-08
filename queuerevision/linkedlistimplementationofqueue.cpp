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

class queue{
    public:
    node* head;
    node* tail;
    int size;

    queue(){
        this->head = NULL;
        this->tail = NULL;
        size=0;
    }

    void pushattail(int val){
        node* newnode = new node(val);
        if(tail==NULL){
            head = newnode;
            tail=newnode;
        }
        else{
            tail->next = newnode;
            newnode->next = NULL;
            tail = newnode;
        }
        size++;
    }

    void pop(){
        if(head==NULL){
            cout<<"elements cannot be popped!!!!";
            return;
        }
        else{
            head = head->next;
        }
        size--;
    }

    int front(){
        if(head==NULL){
            cout<<"queue is empty!!!!!";
            return 0;
        }
        else{
            return head->val;
        }
    }

    int back(){
        if(head==NULL){
            cout<<"queue is empty!!";
            return 0;
        }
        else{
            return tail->val;
        }
    }

    int sizeofthequeue(){
        return size;
    }

    void display(){
        node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }


};

int main(){
    queue q;

    q.pushattail(10);
    q.pushattail(20);
    q.pushattail(30);
    q.pushattail(40);
    cout<<q.sizeofthequeue()<<endl;
    q.display();
    cout<<q.front();
    q.pop();
    cout<<q.front();
}