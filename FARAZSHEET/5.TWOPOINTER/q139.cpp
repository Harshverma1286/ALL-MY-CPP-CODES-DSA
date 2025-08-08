#include<iostream>
#include<vector>
using namespace std;

vector<int> applyoperations(vector<int>& nums){
    int n = nums.size();

    for(int i=0;i<n-1;i++){
        if(nums[i]==nums[i+1] && nums[i]!=0){
            nums[i]*=2;
            nums[i+1]=0;
        }
    }

    int zeroes = 0;
    for(int i=0;i<n;i++){
        if(nums[i]!=0){
            swap(nums[i],nums[zeroes]);
            zeroes++;
        }
    }

    return nums;
}

int main(){
    vector<int> nums = {1,2,2,1,1,0};

    vector<int> ans = applyoperations(nums);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}