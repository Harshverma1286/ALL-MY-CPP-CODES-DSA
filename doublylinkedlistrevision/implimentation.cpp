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
        this->next = NULL;
    }
};

void reverseprint(node* e){
    while(e!=NULL){
        cout<<e->val<<" ";
        e = e->prev;
    }
    cout<<endl;
}


int main(){
    node* a = new node(10);
    node* b = new node(20);
    node* c = new  node(30);
    node* d = new node(40);
    node* e = new node(50);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->prev = d;
    d->prev = c;
    c->prev = b;
    b->prev = a;

    reverseprint(e);


}