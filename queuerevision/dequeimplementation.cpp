#include<iostream>
using namespace std;

class node{
    public:
    int val;
    node* next;
    node* prev;

    node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class dequeue{
    public:
    node* head;
    node* tail;
    int size;

    dequeue(){
        this->head = NULL;
        this->tail = NULL;
        size=0;
    }

    void pushatfront(int val){
        node* newnode = new node(val);

        if(head==NULL){
            head=newnode;
            tail=newnode;
        }
        else{
            newnode->next=head;
            head->prev = newnode;
            head = newnode;
        }
        size++;
    }

    void pushattail(int val){
        node* newnode = new node(val);
        if(head==NULL){
            head = tail = newnode;
        }
        else{
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
        size++;
    }

    void popfront(){
        if(head==NULL){
            cout<<"no elements can be deleted!!!";
            return;
        }
        else{
            head = head->next;
            head->prev=NULL;
            size--;
        }
    }

    void popatback(){
        if(head==NULL){
            cout<<"NO ELEMENTS CAN BE DELETED!!!!";
            return;
        }
        else{
            node* temp = head;
            while(temp->next!=tail){
                temp=temp->next;
            }
            temp->next = NULL;
            tail->prev = NULL;
            tail = temp;
            size--;
        }
    }

    int sizeofthedequeue(){
        return size;
    }

    int front(){
        return head->val;
    }

    int back(){
        return tail->val;
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
    dequeue q;

    q.pushatfront(10);
    q.pushattail(20);
    q.pushattail(30);
    q.pushattail(40);
    q.display();
    q.popatback();
    q.popfront();
    q.display();
    cout<<q.front();


}