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

void lowestCommonAncestor(node*& temp,node* root, int p, int q) {
    if(root==NULL){
        return;
    }
    else if(p<=root->val && q>=root->val || q<=root->val && p>=root->val){
        temp = root;
        return;
    }
    else if(p<=root->val && q<=root->val) lowestCommonAncestor(temp,root->left,p,q);
    else lowestCommonAncestor(temp,root->right,p,q);
}

int distanceofkey1(node* root,int key1,int& distance){
    if(root==NULL) return 0;
    if (root->val == key1) return distance;
    distance++;
    if(key1<root->val) return distanceofkey1(root->left,key1,distance);
    else return  distanceofkey1(root->right,key1,distance);
}



int main(){

    node* a = new node(20);
    node* b = new node(10);
    node* c = new node(30);
    node* d = new node(5);
    node* e = new node(15);
    node* f = new node(25);
    node* g = new node(35);

    
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    node* root = a;

    node* temp = root;
    int key1 = 5;
    int key2 = 35;
    lowestCommonAncestor(temp,root,key1,key2);
    int distance = 0;
    int distance1 = distanceofkey1(temp,key1,distance);
    distance=0;
    int distance2 = distanceofkey1(temp,key2,distance);
    int finalans = distance1+distance2;
    cout<<finalans;

}