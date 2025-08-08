#include<iostream>
#include<vector>
using namespace std;

int findpeakelement(vector<int>& nums){
    int n = nums.size();
    int low = 0;
    int high = n-1;

    if(nums.size()==1) return 0;

    while(low<=high){
        int mid = low+(high-low)/2;

        if(mid>0 && mid<n-1){
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
                return mid;
            }
            else if(nums[mid]>nums[mid-1] && nums[mid]<nums[mid+1]){
                low = mid+1;
            }
            else high = mid-1;
        }
        else{
            if(mid==0){
                if(nums[mid]>nums[mid+1]){
                    return mid;
                }
                else return mid+1;
            }
            else if(mid==n-1){
                if(nums[mid-1]>nums[mid]){
                    return mid-1;
                }
                else return mid;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {1,2,3,1};

    cout<<findpeakelement(nums);
}