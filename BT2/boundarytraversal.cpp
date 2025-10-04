#include<iostream>
#include<queue>
#include<limits.h>
using namespace std;

class node{
    public:
    int val;
    node* left;
    node* right;

    node(int val){
        this->val=val;
        this->right = NULL;
        this->left = NULL;
    }
};

node*  construct(int arr[] , int n){
    queue<node*> q;
    node* root = new node(arr[0]);
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
        else{
            l = NULL;
        }
        if( j!=n && arr[j]!=INT_MIN){
            r = new node(arr[j]);
        }
        else{
            r = NULL;
        }
        temp->left = l;
        temp->right = r;

        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);

        i+=2;
        j+=2;
    }
    return root;
    cout<<endl;

}

void leftboundary(node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return;

    cout<<root->val<<" ";
    leftboundary(root->left);
    if(root->left==NULL){
        leftboundary(root->right);
    }
}

void bottomboundary(node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) {
        cout<<root->val<<" ";
    } 
    bottomboundary(root->left);
    bottomboundary(root->right);

}

void rightboundary(node* root){
    if(root==NULL) return;

    if(root->left==NULL && root->right==NULL) return;
    rightboundary(root->right);
    if(root->right==NULL) rightboundary(root->left);
    cout<<root->val<<" ";
}

void boundary(node* root){
        leftboundary(root);
    bottomboundary(root);
    rightboundary(root);
}

// int levels(node* root){
//     if(root==NULL) return 0;
//     return 1 + max(levels(root->left),levels(root->right));
// }

// void nthlevel(node* root, int currlevel ,int level){
//     if(root==NULL) return;
//     if(currlevel==level){
//         cout<<root->val<<" ";
//         return;
//     }
    
//     nthlevel(root->left,currlevel+1,level);
//     nthlevel(root->right,currlevel+1,level);
    
// }
// void nooflevel(node* root){
//     int n = levels(root);
//     for(int i=1;i<=n;i++){
//       nthlevel(root,1,i);
//        cout<<endl;
//     }
// }

int main(){
    int arr[]={1,2,3,4,5,INT_MIN,6,7,INT_MIN,8,INT_MIN,9,10,INT_MIN,11,INT_MIN,12,13,INT_MIN,14,INT_MIN,15,16,INT_MIN,17,INT_MIN,INT_MIN,18,INT_MIN,19,INT_MIN,INT_MIN,INT_MIN,20,21,22,23,INT_MIN,24,25,26,27,INT_MIN,INT_MIN,28,INT_MIN,INT_MIN};
    int n = sizeof(arr)/sizeof(arr[0]);

    node* root = construct(arr,n);
    //nooflevel(root);
    // leftboundary(root);
    // cout<<endl;
    // bottomboundary(root);
    // cout<<endl;
    // rightboundary(root);
    boundary(root);
}