#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1,2,2,4};

    int i = 0;
    vector<int> ans;

    while(i<nums.size()){
        int correctidx = nums[i]-1;

        if(i==correctidx){
            i++;
        }
        else if(i!=correctidx){
            if(nums[i]==nums[correctidx]){
                ans.push_back(nums[i]);
                i++;
            }
        }
    }

    for(int i=0;i<nums.size();i++){
        if(i+1!=nums[i]){
            ans.push_back(i+1);
        }
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}