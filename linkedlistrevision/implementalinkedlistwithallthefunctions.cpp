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

class linkedlist{
    public:
    node* head;
    node* tail;
    int size;

    linkedlist(){
        this->head = NULL;
        this->tail = NULL;
        size = 0;
    }

    void insertathead(int val){
        node* temp = new node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void insertattail(int val){
        node* temp = new node(val);

        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void insertatanyindx(int val,int idx){
        if(idx<0 || idx>size){
            cout<<"INVALID IDX!";
            return;
        }
        else if(idx==0){
            insertathead(val);
        }
        else if(idx==size){
            insertattail(val);
        }
        else{
            node* newval = new node(val);
            node* temp = head;
            for(int i=0;i<idx-1;i++){
                temp = temp->next;
            }
            newval->next = temp->next;
            temp->next = newval;
            size++;
        }
    }

    void deleteathead(){
        if(size==0){
            cout<<"INVALID DELETION!";
        }
        else{
            head = head->next;
            size--;
        }
    }

    void deleteAttail(){
        if(size==0){
            cout<<"INVALID DELETION!";
        }
        else{
            node* temp = head;
            while(temp->next->next!=NULL){
                temp = temp->next;
            }
            temp->next = NULL;
            size--;
        }
    }

    void deleteatanayidx(int idx){
        if(idx<0 || idx>size){
            cout<<"INVALID DELETION!!";
            return;
        }
        else if(idx==0){
            deleteathead();
        }
        else if(idx==size){
            deleteAttail();
        }
        else{
            node* temp = head;
            for(int i=0;i<idx-1;i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }

    void getthevalueusingindex(int idx){
        if(idx<0){
            cout<<"there is no val in this index";
            return;
        }
        else if(idx>=size){
            cout<<"there is no val at this index";
            return;
        }
        node* temp = head;
        for(int i=0;i<idx;i++){
            temp=temp->next;
        }
        cout<<temp->val<<endl;
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
    linkedlist ll;
    ll.insertathead(10);
    ll.insertattail(20);
    ll.insertattail(30);
    ll.display();
    ll.insertattail(40);
    ll.insertattail(50);
    ll.insertattail(60);
    ll.display();
    ll.deleteatanayidx(2);
    ll.display();
    ll.deleteatanayidx(0);
    ll.display();
    ll.getthevalueusingindex(2);


}

