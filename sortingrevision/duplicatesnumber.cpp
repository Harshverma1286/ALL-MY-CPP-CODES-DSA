#include<iostream>
#include<vector>
using namespace std;

int findduplicates(vector<int>& nums){
    int n = nums.size();

    int i = 0;
    while(i<n){
        int correctidx = nums[i];
        if(nums[i]==nums[correctidx]) return nums[i];
        else swap(nums[i],nums[correctidx]);
    }
    return 100;
}

int main(){
    vector<int> nums = {1,3,4,2,2};

    cout<<findduplicates(nums);
}