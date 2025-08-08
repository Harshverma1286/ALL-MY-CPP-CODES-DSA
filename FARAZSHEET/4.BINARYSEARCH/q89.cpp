#include<iostream>
#include<vector>
using namespace std;

int findmininrotatedsortedarraywithduplicates(vector<int>& nums){
    int n = nums.size();
    int low = 0;
    int high = n-1;

    if(nums[low]<nums[high]) return nums[low];

    while(low<=high){
        int mid = low+(high-low)/2;
        if(mid>0 && nums[mid]<nums[mid-1]) return nums[mid];

        if(mid<n-1 && nums[mid]>nums[mid+1]){
            return nums[mid+1];
        }

        if(nums[mid]==nums[high]){
            high--;
        }

        if(nums[mid]>nums[high]){
            low = mid+1;
        }
        else high;
    }
    return nums[low];
}

int main(){
    vector<int> nums = {2,2,2,0,1};

    cout<<findmininrotatedsortedarraywithduplicates(nums);
}