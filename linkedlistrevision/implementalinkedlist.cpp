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
        this->head=NULL;
        this->tail = NULL;
        size=0;
    }


    void insertatend(int val){
        node* temp = new node(val);
        if(size==0) head =tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void addatfirstposition(int val){
        node*temp = new node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void insertatanyposition(int val,int position){
        node* newval = new node(val);
        if(position<0 || position>size){
            cout<<"here the element cant be inserted";
            return;
        } 
        else if(position==0){
            addatfirstposition(val);
        }
        else if(position==size){
            insertatend(val);
        }
        else{
            node* temp = head;
            for(int i=1;i<position;i++){
                temp = temp->next;
            }
            newval->next = temp->next;
            temp->next = newval;
        }
        size++;
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

    void deleteathead(){
        if(size==0){
            cout<<"there are no elements in the linkedlist so it cant be deleted";
        }
        else{
            head = head->next;
            size--;
        }
    }

    void deleteattail(){
        if(size==0){
            cout<<"there is no element to delete";
        }
        node*temp = head;
        while(temp->next!=tail){
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
    }

    void deleteatanyposition(int idx){
        if(idx==0){
            deleteathead();
            return;
        }
        else if(idx==size-1){
            deleteattail();
            return;
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

    void display(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
    }
};

int main(){
    linkedlist ll;
    ll.insertatend(10);
    //ll.display();
    ll.insertatend(20);
    ll.insertatend(30);
    //ll.display();
    //ll.addatfirstposition(10);
    //ll.addatfirstposition(40);
    ll.insertatend(50);
    ll.insertatend(60);
    ll.insertatanyposition(40,3);
    //ll.getthevalueusingindex(2);
    //ll.display();
    //ll.deleteathead();
    //ll.display();
    //ll.deleteathead();
    ll.display();
    cout<<endl;
    ll.deleteatanyposition(1);

    ll.display();
}