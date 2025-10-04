#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> dp = {{10,40,70},{20,50,80},{30,60,90}};
    int n = dp.size();

    for(int i=1;i<dp.size();i++){
        dp[i][0] = dp[i][0] +max(dp[i-1][1],dp[i-1][2]);
        dp[i][1] = dp[i][1] +max(dp[i-1][0],dp[i-1][2]);
        dp[i][2] = dp[i][2] +max(dp[i-1][0],dp[i-1][1]);
    }

    int maxi = max(dp[n-1][0],dp[n-1][1]);
    cout<<max(maxi,dp[n-1][2]);
}