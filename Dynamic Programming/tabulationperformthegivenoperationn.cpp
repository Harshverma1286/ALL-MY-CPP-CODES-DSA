#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n = 7;
    vector<int> dp(n+1);
    dp[0] = 0;
    dp[1] = 0;

    for(int i=2;i<=n;i++){
        int ways = dp[i-1];
        if(i%2==0) ways = min(ways,dp[i/2]);
        if(i%3==0) ways = min(ways,dp[i/3]);
        dp[i] = 1+ways;
    }
    cout<<dp[n];
}