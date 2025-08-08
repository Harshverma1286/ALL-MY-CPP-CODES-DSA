#include<iostream>
#include<vector>
using namespace std;

int searchinsert(vector<int>& nums,int target){
    int n = nums.size();
    if(target>nums[nums.size()-1]) return n;
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(nums[mid]==target){
            return mid;
            break;
        }
        else if(nums[mid]<target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return low;
}

int main(){
    vector<int> nums = {1,3,5,6};
    int target = 2;

    cout<<searchinsert(nums,target);
}