#include<iostream>
#include<vector>
using namespace std;

vector<int> rearrangearray(vector<int>& nums){
    vector<int> positive;
    vector<int> negative;
    vector<int> result;

    for(int i=0;i<nums.size();i++){
        if(nums[i]>=0) positive.push_back(nums[i]);
        else negative.push_back(nums[i]);
    }

    int i=0;
    int j=0;
    while(i<positive.size() && j<negative.size()){
        result.push_back(positive[i++]);
        result.push_back(negative[j++]);
    }
    return result;
}

int main(){
    vector<int> nums = {3,1,-2,-5,2,-4};

    vector<int> ans = rearrangearray(nums);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}