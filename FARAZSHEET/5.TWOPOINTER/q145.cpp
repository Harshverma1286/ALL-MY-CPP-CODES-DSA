#include<iostream>
#include<vector>
using namespace std;

void sortcolors(vector<int>& nums){
    int low = 0;
    int mid = 0;
    int high = nums.size()-1;

    while(mid<=high){
        if(nums[mid]==2){
            swap(nums[mid],nums[high]);
            high--;
        }
        else if(nums[mid]==0){
            swap(nums[mid],nums[low]);
            low++;
            mid++;
        }
        else mid++;
    }
}

int main(){
    vector<int> nums = {2,0,2,1,1,0};

    sortcolors(nums);

    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}