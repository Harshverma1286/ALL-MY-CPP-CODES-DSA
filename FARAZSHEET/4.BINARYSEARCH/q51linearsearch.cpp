#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int specialarray(vector<int>& nums){
    
    int n = nums.size();

    sort(nums.begin(),nums.end());

    int count = 0;
    for(int i=0;i<n;i++){
        count = n-i;
        if(nums[i]>=count ){
            if(i==0 || nums[i-1]<count){
                return count;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {3,5};

    cout<<specialarray(nums);
}