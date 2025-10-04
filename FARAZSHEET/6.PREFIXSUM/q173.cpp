#include<iostream>
#include<vector>
using namespace std;

vector<int> sumabsolutedifferences(vector<int>& nums){
    int n = nums.size();
    vector<int> prefixsum(n);
    vector<int> suffixsum(n);
    prefixsum[0] = nums[0];
    suffixsum[n-1] = nums[n-1];

    for(int i=1;i<n;i++){
        prefixsum[i] = nums[i]+prefixsum[i-1];
    }
    for(int i=n-2;i<=0;i--){
        suffixsum[i] = nums[i]+suffixsum[i+1];
    }

    vector<int> result(n);

    for(int i=0;i<n;i++){
        int value = i*nums[i] - ((i<=0) ? 0 : prefixsum[i-1]) + ((i>=n-1) ? 0 : suffixsum[i+1]) - (n-i-1)*nums[i];
        result[i] = abs(value);
    }
    return  result;
}

int main(){
    vector<int> nums = {2,3,5};

    vector<int> ans = sumabsolutedifferences(nums);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }




}