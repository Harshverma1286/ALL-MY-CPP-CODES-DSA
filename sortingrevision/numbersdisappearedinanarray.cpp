#include<iostream>
#include<vector>
using namespace std;

vector<int> finddisappearednumber(vector<int>& nums){
    int n = nums.size();

    int i=0;
    while(i<n){
        int correctidx = nums[i]-1;
        if(nums[i]==nums[correctidx] || nums[i]==correctidx){
            i++;
        }
        else swap(nums[i],nums[correctidx]);
    }
    vector<int> ans;

    for(int i=0;i<n;i++){
        if(nums[i]!=i+1){
            ans.push_back(i+1);
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {4,3,2,7,8,2,3,1};

    vector<int> ans = finddisappearednumber(nums);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}