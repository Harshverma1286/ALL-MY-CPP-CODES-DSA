#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


long long countfairpairs(vector<int>& nums, int lower,int upper){
    int n = nums.size();

    sort(nums.begin(),nums.end());

    long long count = 0;


    for(int i=0;i<n-1;i++){
        int minimumvalue = lower-nums[i];
        int maximumvalue = upper-nums[i];

        auto lowerbound = lower_bound(nums.begin()+i+1,nums.end(),minimumvalue);
        auto upperbound = upper_bound(nums.begin()+i+1,nums.end(),maximumvalue);


        count+=upperbound-lowerbound;
    }

    return count;
}

int main(){
    vector<int> nums = {0,1,7,4,4,5};
    int lower = 3;
    int upper = 6;

    cout<<countfairpairs(nums,lower,upper);

    return 0;
}