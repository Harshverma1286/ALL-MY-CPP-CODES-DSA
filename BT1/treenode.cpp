#include<iostream>
#include<limits.h>
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

 void display(node* root ){
    if(root ==NULL) return;
    cout<<root->val;
    display(root->left);
    display(root->right);
}

int sum(node* root){
    if(root == NULL) return 0;
    return root->val + sum(root->left) + sum(root->right);

}
int size(node* root){
    if(root == NULL) return 0;
    return 1+size(root->left)+size(root->right);
}

int maxintree(node* root){
    if(root==NULL) return 0;
    int lmax =maxintree(root->left);
    int rmax =maxintree(root->right);
    return max(root->val,max(lmax,rmax));
}

int nooflevel(node* root){
    if(root==NULL) return 0;
    return 1+max(nooflevel(root->left),nooflevel(root->right));
}
int product(node* root){
    if(root==NULL) return 1;
    return root->val * product(root->left) * product(root->right);
}

int minintree(node* root){
    if(root==NULL) return INT_MAX;
    int lmin=minintree(root->left);
    int rmin =minintree(root->right);
    return min(root->val,min(lmin,rmin));
}
int main(){
    node* a = new node(1);
    node* b = new node(2);
    node* c = new node(3);
    node* d = new node(4);
    node* e = new node(5);
    node* f = new node(6);
    node* g = new node(7);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    display(a);
    cout<<endl;
    cout<<sum(a)<<endl;
    cout<<size(a)<<endl;;
    cout<<maxintree(a)<<endl;
    cout<<nooflevel(a)<<endl;
    cout<<product(a)<<endl;
    cout<<minintree(a);

 
}