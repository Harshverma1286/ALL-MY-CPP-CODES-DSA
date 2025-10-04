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

int levels(node* root){
    if(root==NULL) return 0;
    return 1 + max(levels(root->left),levels(root->right));
}

void nthlevel(node* root, int currlevel ,int level){
    if(root==NULL) return;
    if(currlevel==level){
        cout<<root->val<<" ";
        return;
    }
    
    nthlevel(root->left,currlevel+1,level);
    nthlevel(root->right,currlevel+1,level);
    
}

void nthlevelrev(node* root , int currlevel , int level){
    if(root==NULL) return;
    if(currlevel==level){
        cout<<root->val<<" ";
        return;
    }
    nthlevelrev(root->right,currlevel+1,level);
    nthlevelrev(root->left,currlevel+1,level);

}

void nooflevel(node* root){
    int n = levels(root);
    for(int i=1;i<=n;i++){
      nthlevelrev(root,1,i);
       cout<<endl;
    }
}

void nthlevelqueue(node* root){
     queue<node*> q;
     q.push(root);
     while(q.size()>0){
        node* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
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
    //int level;
    //cout<<"enter the level :";
    //cin>>level;
    //nthlevel(a,1,level);
    //nooflevel(a);
    nthlevelqueue(a);
}