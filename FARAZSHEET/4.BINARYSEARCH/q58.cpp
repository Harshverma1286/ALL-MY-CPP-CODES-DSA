#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> targetindices(vector<int>& nums,int target){
    sort(nums.begin(),nums.end());
    int n = nums.size()-1;

    vector<int> ans;

    int low =0;
    int high = n-1;
    int start = -1;
    int end = -1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(nums[mid]==target){
            start = mid;
            high = mid-1;
        }
        else if(nums[mid]<target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    low = 0;
    high = n-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(nums[mid]==target){
            end = mid;
            low = mid+1;
        }
        else if(nums[mid]<target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    for(int i=start;i<=end;i++){
        ans.push_back(i);
    }
    return ans;
}



int main(){
    vector<int> nums = {1,2,5,2,3};
    int target = 2;

    vector<int> ans=targetindices(nums,target);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}