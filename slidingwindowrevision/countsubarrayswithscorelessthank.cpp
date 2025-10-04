#include<iostream>
#include<vector>
using namespace std;

long long countsubarrays(vector<int>& nums,int k){
    long long n = nums.size();
    long long sum = 0;
    long long count = 0;
    long long i=0;
    for(long long j=0;j<n;j++){
        sum+=nums[j];

        while(sum*(j-i+1)>=k){
            sum-=nums[i];
            i++;
        }
        count+=j-i+1;
    }
    return count;
}

int main(){
    vector<int> nums = {2,1,4,3,5};
    int k = 10;

    cout<<countsubarrays(nums,k);
}