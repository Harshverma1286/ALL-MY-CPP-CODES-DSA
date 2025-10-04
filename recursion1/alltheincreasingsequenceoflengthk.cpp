#include<iostream>
#include<vector>
using namespace std;

void increasingsequenceoflengthk(vector<int>& arr,vector<int> ans,int idx,vector<vector<int>>& finalans,int k){
    if(ans.size()==k){
        finalans.push_back(ans);
        return;
    }

    for(int i=idx;i<arr.size();i++){
        if(i>idx && arr[i]==arr[i-1]) continue;
        ans.push_back(arr[i]);
        increasingsequenceoflengthk(arr,ans,i+1,finalans,k);
        ans.pop_back();
    }
}

int main(){
    int n = 4;
    int k = 2;
    vector<int> arr;
    for(int i=1;i<=n;i++){
        arr.push_back(i);
    }
    vector<vector<int>> finalans;
    int idx = 0;
    vector<int> ans;
    increasingsequenceoflengthk(arr,ans,idx,finalans,k);

    for(int i=0;i<finalans.size();i++){
        for(int j=0;j<finalans[i].size();j++){
            cout<<finalans[i][j]<<" ";
        }
        cout<<endl;
    }
}