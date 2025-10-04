#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int minsubarraylength(int target,vector<int>& nums){
    int n = nums.size();
    int i=0;
    int j=0;
    int sum =0;
    int length= 0;
    int minlength = INT_MAX;

    while(j<n){
        sum+=nums[j];

        while(sum>=target){
            length = j-i+1;
            minlength = min(minlength,length);
            sum-=nums[i];
            i++;
        }
        j++;
    }

    return (minlength==INT_MAX ? 0 : minlength);
}

int main(){
    int target = 7;
    vector<int> nums = {2,3,1,2,4,3};

    cout<<minsubarraylength(target,nums);
}