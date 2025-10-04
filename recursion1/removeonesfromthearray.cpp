#include<iostream>
#include<vector>
using namespace std;

void removeallonesfromthearray(vector<int>& ans,int i,vector<int>& finalans){
    if(i==ans.size()){
        for(int i=0;i<finalans.size();i++){
            cout<<finalans[i]<<" ";
        }
        return;
    }
    if(ans[i]!=1) finalans.push_back(ans[i]);
    removeallonesfromthearray(ans,i+1,finalans);

}

int main(){
    vector<int> ans = {1,2,3,1,1,4,1,7};
    vector<int> finalans;
    removeallonesfromthearray(ans,0,finalans);
}