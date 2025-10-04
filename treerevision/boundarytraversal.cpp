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

void leftsideviewoftree(node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return;
    cout<<root->val<<" ";
    if(root->left!=NULL) leftsideviewoftree(root->left);
    if(root->left==NULL && root->right!=NULL) leftsideviewoftree(root->right);
}

void printingleafnodes(node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL){
        cout<<root->val<<" ";
        return;
    }
    printingleafnodes(root->left);
    printingleafnodes(root->right);
}

void rightsideviewofatree(node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return;
    if(root->right!=NULL) rightsideviewofatree(root->right);
    if(root->right==NULL && root->left!=NULL) rightsideviewofatree(root->left);
    cout<<root->val<<" ";
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
    c->left = f;
    c->right = g;
    d->right = h;
    h->left = i;
    cout<<a->val<<" ";
    leftsideviewoftree(a->left);
    printingleafnodes(a->left);
    printingleafnodes(a->right);
    rightsideviewofatree(a->right);

}