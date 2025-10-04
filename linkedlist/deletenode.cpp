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
        node* temp =head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;

        }
    }

    node* deletenode(node* head , int tarval){
        if(head->val==tarval){
            head=head->next;
            return head;
        }
        node*temp = head;
        while(temp->next->val!=tarval){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;

    }


int main(){
    node* a = new node(10);
    node* b = new node(20);
    node* c = new node(30);
    node* d = new node(40);

    a->next=b;
    b->next=c;
    c->next=d;
    node* head = a;
    display(head);
    cout<<endl;
    head=deletenode(head,30);
    display(head);




}