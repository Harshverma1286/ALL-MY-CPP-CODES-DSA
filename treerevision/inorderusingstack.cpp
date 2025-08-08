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

void inordertraversalusingstack(node* root,stack<node*>& st,vector<int>& v){
    node* newtemp = root;
    
    while(newtemp!=NULL || st.size()>0){
        if(newtemp!=NULL){
            st.push(newtemp);
            newtemp = newtemp->left;
        }
        else{
            node* temp = st.top();
            st.pop();
            v.push_back(temp->val);
            newtemp = temp->right;
        }
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
    vector<int> v;

    inordertraversalusingstack(a,st,v);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }


}