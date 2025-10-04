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

int minvalueintree(node* root){
    if(root==NULL) return INT_MAX;
    int minimum = min(root->val, min(minvalueintree(root->left),minvalueintree(root->right)));
    return minimum;
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

    cout<<minvalueintree(a);





    

    

}