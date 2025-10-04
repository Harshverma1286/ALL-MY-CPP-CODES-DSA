#include<iostream>
using namespace std;

class node{
    public:
    int val;
    node *next;
    node *prev;

    node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }

};

class dll{
    public:
    node *head;
    node *tail;
    int size;

    dll(){
        head=tail=NULL;
        size = 0;
    }
    
    void insertattail(int val){
        node* temp = new node(val);
        if(size==0){
            head = tail = temp;
        }
        else{
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        size++;

    }

    void insertathead(int val){
        node* temp = new node(val);
        if(size==0){
            head = tail = temp;
        }
        else{
            temp->next = head;
            head->prev = temp;
            temp = head;
        }
        size++;
    }

    void insertatanyindex(int idx , int val){
        if(idx<0 || idx>size) cout<<" invalid index" ;
        else if(idx==0) insertathead(val);
        else if(idx==size) insertattail(val);
        else{
            node* t = new node(val);
            node* temp = head;
            for(int i=1;i<=idx-1;i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            t->prev = temp;
            temp->next->prev = t;
            size++;
        }

    }
     
    void display(){
        node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;

    }

    void displayrev(node* tail){
        node* temp = tail;
        while(temp){
            cout<<temp->val<<" ";
            temp = temp->prev;
        }
        cout<<endl;
    }
};
int main(){
    dll list;
    list.insertattail(10);
    list.insertattail(20);
    list.insertattail(30);
    list.insertattail(40);
    list.display();
    list.insertathead(50);
    list.display();
    list.insertatanyindex(2,60);
    list.display();

}