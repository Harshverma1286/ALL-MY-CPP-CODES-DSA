#include<iostream>
#include<vector>
using namespace std;

int singlenonduplicate(vector<int>& nums){
    int n = nums.size();

    int low = 0;
    int high = n-1;

    int mid;

    while(low<=high){
        mid = low+(high-low)/2;
        if(mid==0) return nums[mid];

        else if((mid-1>=0 && mid+1<=n-1) && (nums[mid]>nums[mid-1] && nums[mid]<nums[mid+1])){
            return nums[mid];
        }

        else if(mid%2!=0){
            if(nums[mid]==nums[mid-1]){
                low = mid+1;
            }
            else high = mid-1;
        }
        else if(mid%2==0){
            if(nums[mid]==nums[mid-1]){
                high = mid-1;
            }
            else low = mid+1;
        }
    }
    return nums[mid];
}

int main(){
    vector<int> nums = {1,1,2,3,3,4,4,8,8};

    cout<<singlenonduplicate(nums);
}