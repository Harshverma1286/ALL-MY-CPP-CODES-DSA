#include<iostream>
#include<vector>
using namespace std;

class NumArray{
    vector<int> ans;
    public:
    NumArray(vector<int>& nums){
        ans.resize(nums.size()+1,0);

        for(int i=0;i<nums.size();i++){
            ans[i+1] = ans[i]+nums[i];
        }
    }

    int sumrange(int left,int right){
        return ans[right+1]-ans[left];
    }
};

int main(){
    vector<int> nums = {-2,0,3,-5,2,-1};

    NumArray numArray(nums);

    cout<<numArray.sumrange(0,2)<<" ";
    cout<<numArray.sumrange(1,3)<<" ";
    cout<<numArray.sumrange(2,4)<<" ";


}