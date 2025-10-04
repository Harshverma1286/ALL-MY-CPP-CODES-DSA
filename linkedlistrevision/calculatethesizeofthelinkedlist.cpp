#include<iostream>
using namespace std;

class node{
    public:
    int value;
    node* next;

    node(int value){
        this->value = value;
        this->next = NULL;
    }
};

void calculatesize(node* a){
    int n=0;
    node* temp=a;
    while(temp!=NULL){
        n++;
        temp=temp->next;
    }
    cout<<n;
}

int main(){
    node* a = new node(10);
    node* b = new node(20);
    node* c = new node(30);
    node* d = new node(40);
    a->next=b;
    b->next=c;
    c->next=d;

    calculatesize(a);
}