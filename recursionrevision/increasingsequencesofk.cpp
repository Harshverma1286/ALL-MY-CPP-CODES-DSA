#include<iostream>
#include<vector>
using namespace std;

void subsets(vector<int>& v,vector<int> ans,int idx,int k){
    if(idx==v.size()){
       if(ans.size()==k){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
       }
        return;
    }
    if(ans.size()+(v.size()-idx)<k) return;
    subsets(v,ans,idx+1,k);
    ans.push_back(v[idx]);
    subsets(v,ans,idx+1,k);
}

int main(){
    vector<int> v = {1,2,3,4,5};
    int n = v.size();

    vector<int> ans;

    int idx = 0;
    int k = 3;

    subsets(v,ans,idx,k);
}