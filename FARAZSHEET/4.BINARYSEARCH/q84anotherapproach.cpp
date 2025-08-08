#include<iostream>
#include<vector>
using namespace std;

int minelement(vector<int>& nums){
    int n = nums.size();

    int low = 0;
    int high = n-1;

    while(low<high){
        int mid = low+(high-low)/2;

        if(nums[mid]>=nums[0] && nums[mid]>nums[n-1]){
            low = mid+1;
        }
        else high = mid;
    }
    return nums[high];
}

int main(){
    vector<int> nums = {3,4,5,1,2};

    cout<<minelement(nums);
}