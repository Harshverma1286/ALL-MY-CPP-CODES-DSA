#include<iostream>
using namespace std;

class node{
    public:
    int val;
    node* left;
    node* right;

    node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void display(node* root,int k,int n){
    if(root==NULL) return;
    if(k-1==n){
        cout<<root->val<<" ";
        return;
    }
    display(root->left,k,n+1);
    display(root->right,k,n+1);
}

int main(){
    node* a = new node(1);
    node* b = new node(2);
    node* c = new node(3);
    node* d = new node(4);
    node* e = new node(5);
    node* f = new node(6);
    node* g = new node(7);
    node* h = new node(8);
    node* i = new node(9);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    e->left = h;
    e->right = i;
    c->left = f;
    c->right = g;


    display(a,3,0);
}