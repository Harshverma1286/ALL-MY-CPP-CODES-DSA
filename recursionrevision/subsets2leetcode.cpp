#include<iostream>
#include<vector>
using namespace std;

void helper(vector<int>& nums,vector<int> ans,vector<vector<int>>& finalans,int idx){
    if(idx==nums.size()){
        finalans.push_back(ans);
        return;
    }

    helper(nums,ans,finalans,idx+1);
    ans.push_back(nums[idx]);
    helper(nums,ans,finalans,idx+1);
}

vector<vector<int>> subsets(vector<int>& nums){
    vector<int> ans;
    vector<vector<int>> finalans;
    int idx = 0;

    helper(nums,ans,finalans,idx);
    return finalans;
}

int main(){
    vector<int> nums = {1,2,2};
    vector<vector<int>> result= subsets(nums);

    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[i].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}

