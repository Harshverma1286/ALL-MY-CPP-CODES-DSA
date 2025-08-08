#include<iostream>
#include<limits.h>
#include<unordered_map>
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

int level(node* root){
    if(root==NULL) return 0;
    return 1+max(level(root->left),level(root->right));
}

void nthlevel(node* root , int currlevel , int level){
    if(root==NULL) return;

    if(currlevel==level){
        cout<<root->val<<" ";
    }
    nthlevel(root->left,currlevel+1,level);
    nthlevel(root->right,currlevel+1,level);
}

void nthlevelorder(node* root){
    int n = level(root);
    for(int i=1;i<=n;i++){
        nthlevel(root,1,i);
        cout<<endl;
    }
}

void topview(node* root){
    unordered_map<int , int> mp;
    queue< pair< node* , int >> q;
    pair< node* , int > p;
    p.first = root;
    p.second = 0;
    q.push(p);
    while(q.size()>0){
        node* temp =( q.front()).first;
        int level = (q.front()).second;
        q.pop();
        if(mp.find(level)==mp.end()){
            mp[level] = temp->val;
        }

        if(temp->left!=NULL){
            pair< node* , int > r;
            r.first = temp->left;
            r.second = level-1;
            q.push(r);
        }

        if(temp->right!=NULL){
            pair< node* , int> a;
            a.first = temp->right;
            a.second = level+1;
            q.push(a);
        }
    }
     int minlevel = INT_MAX;
        int maxlevel = INT_MIN;

        for(auto x : mp){
            int level = x.first;
            minlevel = min(minlevel,level);
            maxlevel = max(maxlevel,level);
        }

        for(int i =minlevel; i<=maxlevel;i++){
            cout<<mp[i]<<" ";
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
    node* h = new node(8);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    e->left = g;
    e->right = h;
    c->left = NULL;
    c->right = f;
    g->left = NULL;
    g->right = NULL;
    h->left = NULL;
    h->right = NULL;
    d->left = NULL;
    d->right = NULL;
    f->left = NULL;
    f->right = NULL;

    cout<<level(a)<<endl;
    cout<<endl;
    nthlevelorder(a);
    cout<<endl;
    cout<<endl;
    topview(a);

}