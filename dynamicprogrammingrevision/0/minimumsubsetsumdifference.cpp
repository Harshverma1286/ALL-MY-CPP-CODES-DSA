#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main(){
    vector<int> nums = {1,2,7};

    int n = nums.size();
    int sum = 0;

    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
    }

    vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1, false));

    for (int i = 0; i <= n; i++) dp[i][0] = 1;
    for (int j = 1; j <= sum; j++) dp[0][j] = 0;

    for(int i=1;i<=nums.size();i++){
        for(int j=1;j<=sum;j++){
            if(nums[i-1]<=j){
                dp[i][j] = dp[i-1][j-nums[i-1]] || dp[i-1][j];
            }
            else dp[i][j] = dp[i-1][j];
        }
    }

    int min_ans = INT_MAX;
    for(int j=0;j<=sum/2;j++){
        if(dp[n][j]==true){
        min_ans = min(min_ans,sum-2*j);
        }
    }
    cout<<min_ans;
}