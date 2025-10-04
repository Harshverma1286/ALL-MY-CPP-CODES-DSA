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

class doublylinkedlist{
    public:
    node* head;
    node* tail;
    int size;

    doublylinkedlist(){
        this->head = NULL;
        this->tail = NULL;
        size = 0;
    }

    void insertathead(int val){
        node* temp = new node(val);
        if(size==0){
            head = tail = temp;
        }
        else{
            head = head->next;
            head->prev = NULL;
        }
        size++;
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

    void insertatanyindex(int val,int position){
        if(position<0 || position>size){
            cout<<"THE POSITION ARE U LOOKING FOR IS INVALID";
        }
        else if(position==0){
            insertathead(val);
        }
        else if(position==size){
            insertattail(val);
        }
        else{
            int left = position-0;
            int right = size-position-1;
            if(left<=right){
                node* temp = new node(val);
                node* newtemp = head;
                for(int i=0;i<position-1;i++){
                    newtemp = newtemp->next;
                }
                node* dummy = newtemp->next;
                newtemp->next = temp;
                temp->prev = newtemp;
                temp->next = dummy;
                dummy->prev = temp;
                size++;
            }
            else{
                node* temp = new node(val);
                node* newanothertemp = tail;
                for(int i=size-1;i>=position;i--){
                    newanothertemp = newanothertemp->prev;
                }
                node* dummy = newanothertemp->next;
                newanothertemp->next = temp;
                temp->prev = newanothertemp;
                temp->next = dummy;
                dummy->prev = temp;
                size++;
            }
        }
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
    doublylinkedlist dll;

    dll.insertathead(10);
    dll.insertattail(20);
    dll.insertattail(30);
    dll.insertattail(50);
    dll.insertattail(60);
    dll.display();
    dll.insertatanyindex(40,3);
    dll.display();

}