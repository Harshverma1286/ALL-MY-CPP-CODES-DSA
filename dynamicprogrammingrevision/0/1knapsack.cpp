#include <bits/stdc++.h>
using namespace std;

long long zerooneknapsack(vector<int>& weights,vector<int>& value,int capacity,int n,vector<vector<long long>>& dp){
    if(n==0 || capacity==0) return 0;

    if(dp[n][capacity]!=-1) return dp[n][capacity];

    if(weights[n-1]<=capacity){
        return dp[n][capacity] = max(value[n-1]+zerooneknapsack(weights,value,capacity-weights[n-1],n-1,dp),zerooneknapsack(weights,value,capacity,n-1,dp));
    }
    else return dp[n][capacity] = zerooneknapsack(weights,value,capacity,n-1,dp);
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,capacity;
    cin>>n>>capacity;

    vector<int> weights(n);

    vector<int> value(n);

    for(int i=0;i<n;i++){
        cin >> value[i] >> weights[i];
    }

    vector<vector<long long>> dp(n+1,vector<long long>(capacity+1,-1));

    cout<<zerooneknapsack(weights,value,capacity,n,dp);

}