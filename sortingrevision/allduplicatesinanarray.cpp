#include<iostream>
#include<vector>
using namespace std;

vector<int> allduplicatesinanarray(vector<int>& nums){
    int n = nums.size();
    vector<int> ans;

    int i=0;
    while(i<n){
        int correctidx = nums[i]-1;
        if(i==correctidx || nums[i]==nums[correctidx]){
            i++;
        }
        else{
            swap(nums[i],nums[correctidx]);
        }
    }

    for(int i=0;i<nums.size();i++){
        if(i+1!=nums[i]){
            ans.push_back(nums[i]);
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {4,3,2,7,8,2,3,1};

    vector<int> ans = allduplicatesinanarray(nums);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}