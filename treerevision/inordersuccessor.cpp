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

node* findtheroot(node* root,int inorder){
    if(root==NULL) return NULL;
    if(root->val==inorder){
        node* temp = root;
        return root;
    }
    findtheroot(root->left,inorder);
    findtheroot(root->right,inorder);
    return NULL;
}

int inordersuccesor(node* tree){
    if(tree->right==NULL) return 0;
    node* succ = tree->right;
    while(succ->left!=NULL){
        succ = succ->left;
    }
    return succ->val;
}




int main(){

    node* a = new node(10);
    node* b = new node(5);
    node* c = new node(20);
    node* d = new node(2);
    node* e = new node(8);
    node* f = new node(15);
    node* g = new node(25);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    
    int inorder = 10;

    node* tree = findtheroot(a,inorder);

    if(tree==NULL){
        cout<<"there is no inorder predecessor";
    }
    else{
        cout<<inordersuccesor(tree);
    }
}