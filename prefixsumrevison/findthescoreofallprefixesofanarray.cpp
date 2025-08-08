#include<iostream>
#include<vector>
using namespace std;

vector<long long> findprefixscore(vector<int>& nums){
    long long n = nums.size();
    vector<long long> maxsofar(n);

    maxsofar[0] = nums[0];
    for(long long i=1;i<n;i++){
        maxsofar[i] = max(maxsofar[i-1],(long long)nums[i]);
    }
    vector<long long> ans(n);
    ans[0] = nums[0]*2;
    for(long long i=1;i<n;i++){
        ans[i] = ans[i-1]+(nums[i]+maxsofar[i]);
    }
    return ans;
}

int main(){
    vector<int> nums = {2,3,7,5,10};

    vector<long long> ans = findprefixscore(nums);

    for(long long i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}