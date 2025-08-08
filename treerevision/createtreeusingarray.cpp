#include<iostream>
#include<limits.h>
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

node*  creatingantreeusingarray(int arr[],int n){
    node* root = new node(arr[0]);
    queue<node*> q;
    q.push(root);
    int i=1;
    int j=2;
    while(q.size()>0 && i<n){
        node* temp = q.front();
        q.pop();
        node* l;
        node* r;
        if(arr[i]!=INT_MIN){
            l = new node(arr[i]);
        }
        else l = NULL;
        if(j<n && arr[j]!=INT_MIN){
            r = new node(arr[j]);
        }
        else r = NULL;
        temp->left = l;
        temp->right = r;
        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);
        i+=2;
        j+=2;
    }
    return root;
}

void levelordertraveralusingqueue(node* root){
    queue<node*> q;
    q.push(root);
    while(q.size()>0){
        node* temp = q.front();
        cout<<temp->val<<" ";
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
        q.pop();
    }
    cout<<endl;
}



int main(){
    int arr[] = {1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9,INT_MIN};

    int n = sizeof(arr)/sizeof(arr[0]);

    node* root = creatingantreeusingarray(arr,n);

    levelordertraveralusingqueue(root);



}