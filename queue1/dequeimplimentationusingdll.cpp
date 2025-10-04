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

class deque{
    public:
    node* head;
    node* tail;
    int s;

    deque(){
        head = tail = NULL;
        s = 0;
    }

    void pushback(int val){
        node* temp = new node(val);
        if(s==0){
            head = tail = temp;
        }
        else{
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
        }
         s++;
    }

    void pushfront(int val){
        node* temp =new node(val);
        if(s==0){
            head = tail = temp;
        }
        else{
            temp->next = head;
            head->prev = temp;
            temp = head;
        }
        s++;
    }

    void popfront(){
        if(s==0){
            cout<<"deque is empty"<<endl;
            return;
        }
        head = head->next;
        if(head) head->prev = NULL;
        if(head==NULL) tail==NULL;
        s--;
    }
    void popback(){
        if(s==0){
            cout<<"dqueue is empty"<<endl;
            return;
        }
        if(s==1){
            popfront();
            return;
        }
        node* temp = tail->prev;
        temp->next = NULL;
        tail = temp;
        s--;
    }

    int front(){
         if(s==0){
            cout<<"dqueue is empty"<<endl;
            return -1;
        }
        return head->val;
    }

    int back(){
         if(s==0){
            cout<<"dqueue is empty"<<endl;
            return -1;
        }
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
    
      int size(){
        return s;
    }
    bool empty(){
        if(s==0) return true;
        else return false;
    }

};

int main(){
     deque dq;
     dq.pushback(10);
     dq.pushback(20);
     dq.pushback(30);
     dq.pushback(40);
     dq.display();
     dq.popback();
     dq.display();
     dq.popfront();
     dq.display();
     dq.pushfront(50);
     dq.display();

}