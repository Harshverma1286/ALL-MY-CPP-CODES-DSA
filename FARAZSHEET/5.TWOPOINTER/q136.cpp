#include<iostream>
#include<vector>
using namespace std;

int removeelements(vector<int>& nums,int val){
    int i=0;
    int j = nums.size()-1;

    while(i<=j){
        if(nums[i]==val && nums[j]!=val){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
        else if(nums[i]!=val && nums[j]==val){
            i++;
        }
        else if(nums[i]==val && nums[j]==val){
            j--;
        }
        else if(nums[i]!=val && nums[j]!=val){
            i++;
        }
    }
    return i;
}

int main(){
    vector<int> nums = {3,2,2,3};
    int val = 3;

    cout<<removeelements(nums,val);
}