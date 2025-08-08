#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void nextpermutation(vector<int>& nums){
    int n = nums.size();
    int i = n-2;
    int j = n-1;

    while(i>=0 && nums[i]>=nums[i+1]){
        i--;
    }

    if(i>=0){
        while(nums[j]<=nums[i]){
            j--;
        }

        swap(nums[i],nums[j]);
    }

    reverse(nums.begin()+i+1,nums.end());
}

int main(){
    vector<int> nums = {1,2,3};

    nextpermutation(nums);

    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}
