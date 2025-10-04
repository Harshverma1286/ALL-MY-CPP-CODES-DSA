#include<iostream>
#include<queue>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void getsize(TreeNode* root,int& size){
    if(root==NULL) return;
    size++;
    getsize(root->left,size);
    getsize(root->right,size);
}



bool iscbt(TreeNode* root){
    int size = 0;
    getsize(root,size);

    queue<TreeNode*> q;
    q.push(root);
    int count = 0;
    while(q.size()>0){
        TreeNode* temp = q.front();
        q.pop();
        count++;
        if(temp!=NULL)q.push(temp->left);
        if(temp!=NULL)q.push(temp->right);
        if(count==size) break;
    }
    while(q.size()>0){
        TreeNode* temp = q.front();
        q.pop();
        if(temp!=NULL) return false;
    }
    return true;
}

bool isvalid(TreeNode* root){
    if(root==NULL) return true;
    
    if((root->left && root->val<root->left->val) || (root->right && root->val<root->right->val)) return false;

    else return isvalid(root->left) && isvalid(root->right);
}

bool checkifmaxheapornot(TreeNode* root){
    if(isvalid(root) && iscbt(root)) cout<<"yes it is a valid max heap";
    else cout<<"no it is not a valid maxheap";
}


int main(){
    TreeNode* a = new TreeNode(20);
    TreeNode* b = new TreeNode(15);
    TreeNode* c = new TreeNode(10);
    TreeNode* d = new TreeNode(8);
    TreeNode* e = new TreeNode(7);
    TreeNode* f = new TreeNode(9);
    TreeNode* g = new TreeNode(6);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;


    checkifmaxheapornot(a);

}