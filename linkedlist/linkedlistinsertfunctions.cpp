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

class linkedlist{
    public:
    node* head;
    node* tail;
    int size;

    linkedlist(){
        head=tail=NULL;
        size=0;
    }


    void insertatend(int val){
        node* temp = new node(val);
        if(size==0){
            head = tail = temp;
        }
        else{
            tail->next=temp;
            tail=temp;

            
        }
        size++;
    }

    void insertathead(int val){
        node* temp = new node(val);
        if(size==0){
            head=tail=temp;
        }
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }

    void insertatbetween(int idx , int val){
        if(idx<0||idx>size){
            cout<<"invalid operator";
        }
        else if(idx==0){
            insertathead(val);
        }
        else if(idx==size){
            insertatend(val);
        }
        else{
            node* t = new node(val);
            node* temp = head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            size++;
        }
    }

    void deleteathead(){
        if(size==0){
            cout<<"invalid operator";
            return;
        }
        head=head->next;
        size--;
    }

    void deleteattail(){
        if(size==0){
            cout<<"invalid operator";
            return;
        }
        node* temp = head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        tail=temp;
        size--;
    }

    void deleteatanyindex(int idx){
        if(size==0){
            cout<<"invalid operator";
            return;
        }
        else if(idx<0 || idx>=size){
            cout<<"invalid index";
            return;
        }
        else if(idx==0){
            return deleteathead();
        }
        else if(idx==size-1){
            return deleteattail();
        }
        else{
            node* temp = head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;

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


};

int main(){

    linkedlist ll;

    ll.insertatend(10);  //insert at end 10 (10->NULL)
    ll.display();
    cout<<ll.size;
    cout<<endl;


    ll.insertatend(20); // (10->20->NULL)
    ll.display();
    cout<<ll.size;
    cout<<endl;


    ll.insertatend(30);
    ll.insertatend(40);  //(10->20->30->40->NULL)
    ll.display();
    cout<<ll.size;
     cout<<endl;

    ll.insertathead(50);
    ll.display();
    cout<<ll.size;
    cout<<endl;

    ll.insertatbetween(4,80);
    ll.display();
    cout<<ll.size;
    cout<<endl;

    ll.deleteathead();
    ll.display();
    cout<<ll.size;
    cout<<endl;

    ll.deleteattail();
    ll.display();
    cout<<ll.size;
    cout<<endl;

    ll.deleteatanyindex(3);
    ll.display();
    cout<<ll.size;
    cout<<endl;

    




}