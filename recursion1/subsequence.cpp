#include<iostream>
#include<vector>
using namespace std;

void subsequence(int& n,int idx,int& k,vector<int> ans){
    if(k==ans.size()){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=idx;i<=n;i++){
        ans.push_back(i);
        subsequence(n,i+1,k,ans);
        ans.pop_back();
    }
}

int main(){
    int n = 5;
    int i = 1;
    int k=3;
    vector<int> ans;
    subsequence(n,i,k,ans);
}