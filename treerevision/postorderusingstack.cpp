#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
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

void postorderusingstack(node* root,stack<node*>& st,vector<int>& v){
    st.push(root);
    while(st.size()>0){
        node* temp = st.top();
        st.pop();
        if(temp->left!=NULL) st.push(temp->left);
        if(temp->right!=NULL) st.push(temp->right);
        v.push_back(temp->val);
    }
    reverse(v.begin(),v.end());
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
    vector<int> v;

    postorderusingstack(a,st,v);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}