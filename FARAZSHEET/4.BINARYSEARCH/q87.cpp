#include<iostream>
#include<vector>
using namespace std;

bool search(vector<int>& nums,int target){
    int n = nums.size();

    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(nums[mid]==target){
            return true;
        }
        if(nums[low]==nums[mid] && nums[high]==nums[mid]){
            low++;
            high--;
        }
        else if(nums[low]<=nums[mid]){
            if(nums[low]<=target && target<nums[mid]){
                high = mid-1;
            }
            else low = mid+1;
        }
        else{
            if(nums[high]>=target && target>nums[mid]){
                low = mid+1;
            }
            else high = mid-1;
        }
    }
    return false;
}

int main(){
    vector<int> nums = {2,5,6,0,0,1,2};
    int target =0;
    bool ans = search(nums,target);

    if(ans==true){
        cout<<"TRUE";
    }
    else{
        cout<<"FALSE";
    }
}