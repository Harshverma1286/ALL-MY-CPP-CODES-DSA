#include<iostream>
#include<queue>
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


int ordersize(node* root){
    if(root==NULL) return 0;
    return 1+ordersize(root->left)+ordersize(root->right);
}

bool ismax(node* root){
    if(root==NULL) return true;
    if(root->left!=NULL && root->val>root->left->val) return false;
    if(root->right!=NULL && root->val>root->right->val) return false;
    else ismax(root->left) && ismax(root->right);
}
bool isCBT(node* root){
    int size = ordersize(root);
    queue<node*> q;
    int count = 0;
    q.push(root);
    while(count<size){
        node* temp = q.front();
        q.pop();
        count++;
        
        if(temp!=NULL) {q.push(temp->left); q.push(temp->right);}
    }
    while(q.size()>0){
        node* temp = q.front();
        if(temp!=NULL) return false;
        q.pop();
    }
     return true;
    cout<<endl;
}
int main(){
    node* a = new node(6);
    node* b = new node(8);
    node* c = new node(10);
    node* d = new node(15);
    node* e = new node(11);
    node* f = new node(20);
    node* g = NULL;
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    if(ismax(a) && isCBT(a)){
        cout<<"tree is a  min heap";
    }
    else{
        cout<<"tree is not a min heap";
    }


}
