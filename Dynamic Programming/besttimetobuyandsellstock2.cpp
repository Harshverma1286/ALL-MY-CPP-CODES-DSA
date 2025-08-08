#include<iostream>
#include<vector>
using namespace std;

int besttimetobuyandsell(vector<int> prices,int i,bool ans,vector<vector<vector<int>>>& dp,int k){
    if(i==prices.size() || k==0 ) return 0;

    if(dp[i][ans][k]!=-1) return dp[i][ans][k];

    int best = 0;
    if(ans){
        if(k>0){
            best = max(besttimetobuyandsell(prices,i+1,true,dp,k),
        besttimetobuyandsell(prices,i+1,false,dp,k-1)+prices[i]);
        }
    }
    else{
        best = max(besttimetobuyandsell(prices,i+1,false,dp,k),besttimetobuyandsell(prices,i+1,true,dp,k)-prices[i]);
    }
    return dp[i][ans][k] = best;
}

int main(){
    vector<int> prices = {2,4,1};

    vector<vector<vector<int>>> dp(1005,vector<vector<int>>(2,vector<int>(105,-1)));

    int k = 2;

    cout<<besttimetobuyandsell(prices,0,false,dp,k);
}