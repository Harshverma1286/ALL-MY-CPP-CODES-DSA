#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int missingnumber(vector<int>& nums){
    int n = nums.size();

    sort(nums.begin(),nums.end());

    for(int i=0;i<nums.size();i++){
        if(i==nums[i]){
            continue;
        }
        else{
            return i;
        }
    }
    return nums.size();
}

int main(){
    vector<int> nums = {3,0,1};

    cout<<missingnumber(nums);
}