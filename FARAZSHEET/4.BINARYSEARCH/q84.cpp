#include<iostream>
#include<vector>
using namespace std;

int minelement(vector<int>& nums){
    int n = nums.size();

    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = low+(high-low)/2;

        if(mid==0){
            if(nums[mid]>nums[mid+1]){
                return nums[mid+1];
            }
            else return nums[mid];
        }
        else if(mid==n-1){
            if(nums[mid]<nums[mid-1]){
                return nums[mid];
            }
            else return nums[mid-1];
        }
        else if(nums[mid]<nums[mid-1] && nums[mid]<nums[mid+1]){
            return nums[mid];
        }
        else if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
            return nums[mid+1];
        }
        else if(nums[mid]>nums[mid-1] && nums[mid]<nums[mid+1]){
            if((nums[mid]<nums[low] || nums[mid]>nums[low]) && nums[mid]<nums[high]){
                high = mid-1;
            }
            else if(nums[mid]>nums[low] && nums[mid]>nums[high]){
                low = mid+1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {3,4,5,1,2};

    cout<<minelement(nums);
}