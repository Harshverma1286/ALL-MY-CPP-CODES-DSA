#include<iostream>
#include<vector>
using namespace std;

void generate(vector<int> ans,int n,int k){
    if(ans.size()==k+1){
        for(int i=1;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=1;i<=n;i++){
        if(ans[ans.size()-1]==i || ans[ans.size()-1]>i){
            continue;
        }
        ans.push_back(i);
        generate(ans,n,k);
        ans.pop_back();
    }
}

int main(){
    int n = 6;
    int k = 4;
    vector<int> v ={0};
    generate(v,n,k);
}