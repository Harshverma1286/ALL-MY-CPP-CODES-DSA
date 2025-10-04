#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int g(vector<int>& profit,int i,int k){
    int sum = 0;
    for(int j=i;j<=k;j++){
        sum = (sum%100 + profit[j]%100)%100;
    }
    return sum;
}

int theminimumprofit(vector<int>& prices,int i,int j,vector<vector<int>>& dp){
    if(i==j) return 0;
    if(i+1==j) return prices[i]*prices[j];

    if(dp[i][j]!=-1) return dp[i][j];

    int minval = INT_MAX;
    for(int k=i;k<=j-1;k++){
        int val = theminimumprofit(prices,i,k,dp)+theminimumprofit(prices,k+1,j,dp)+ (g(prices,i,k) * g(prices,k+1,j));
        if(val!=INT_MAX){
            minval = min(minval,val);
        }
    }
    return dp[i][j] = minval;
}

int main(){
    vector<int> prices = {40,60,20};
    int i=0;
    int j = prices.size()-1;
    vector<vector<int>> dp(100,vector<int>(100,-1));
    cout<<theminimumprofit(prices,i,j,dp);
}