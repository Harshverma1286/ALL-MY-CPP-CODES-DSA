#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node* next;

    node(int val){
        this->val=val;
        this->next=NULL;
    }
};

 void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
 }



 int size(node* head){
    node* temp=head;
    int n=0;
    while(temp!=NULL){
       cout<<temp->val;
       n++;
       temp=temp->next;
    }
    return n;
 }

 void displayrec(node* head){
    node* temp = head;
    while(temp==NULL){
         if(temp==NULL)return;
        cout<<temp->val<<" ";
        displayrec(temp->next);
    }
 }

 void revdisplay(node* head){
    node* temp = head;
    while(temp==NULL){
        if(temp==NULL) return;
        revdisplay(temp->next);
        cout<<temp->val<<" ";
    }
 }

int main(){

    node* a = new node(10);
    node* b = new node(20);
    node* c = new node(30);
    node* d = new node(40);
    a->next=b;
    b->next=c;
    c->next=d;

    display(a);

    //cout<<size(a);
    

    displayrec(a);

revdisplay(a);



}