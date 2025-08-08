#include<iostream>
#include<vector>
using namespace std;

vector<int> runningsum(vector<int>& nums){
    int n = nums.size();

    for(int i=1;i<n;i++){
        nums[i]=nums[i-1]+nums[i];
    }
    return nums;
}

int main(){
    vector<int> nums = {1,2,3,4};

    vector<int> ans = runningsum(nums);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}