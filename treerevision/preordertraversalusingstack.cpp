#include<iostream>
#include<stack>
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

void preordertraversalusingstack(node* root,stack<node*>& st){
    st.push(root);
    while(st.size()>0){
        node* temp = st.top();
        st.pop();
        cout<<temp->val<<" ";
        if(temp->right!=NULL) st.push(temp->right);
        if(temp->left!=NULL) st.push(temp->left);
    }
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

    stack<node*> st;
    preordertraversalusingstack(a,st);
}