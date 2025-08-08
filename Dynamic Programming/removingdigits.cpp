#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

vector<int> get_digits(int n){
    vector<int> ans;
    while(n>0){
        int rem = n%10;
        if(rem!=0){
            ans.push_back(rem);
        }
        n/=10;
    }
    return ans;
}

int removingdigits(int n,vector<int>& dp){
    if(n==0) return 0;
    if(n<=9) return 1;

    if(dp[n]!=-1) return dp[n];

    vector<int> ans = get_digits(n);

    int result = INT_MAX;
    for(int i=0;i<ans.size();i++){
        result = min(result,removingdigits(n-ans[i],dp));
    }
    return dp[n]=1+result;
}

int removingdigits2(int n,vector<int>& dp){
    dp[0] = 0;
    for(int i=1;i<=9;i++){
        dp[i] = 1;
    }
    for(int i=10;i<=n;i++){
        vector<int> digits = get_digits(i);

        int result = INT_MAX;
        for(int j=0;j<digits.size();j++){
            result = min(result,dp[i-digits[j]]);
        }
        dp[i] = 1+result;
    }
    return dp[n];
}

int main(){
    int n = 27;
    vector<int> dp(1000005,-1);
    cout<<removingdigits2(n,dp);
}