#include<iostream>
#include<vector>
using namespace std;

double probabilityofgettingheadwithitsanswer(vector<double>& price,int i,int probofhead,vector<vector<double>>& dp){
    if(probofhead==0) return 1;
    if(i==-1) return 0;

    if(dp[i][probofhead]>-0.9) return dp[i][probofhead];

    return dp[i][probofhead] = probabilityofgettingheadwithitsanswer(price,i-1,probofhead-1,dp)*price[i] + probabilityofgettingheadwithitsanswer(price,i-1,probofhead,dp)*(1-price[i]);
}

int main(){
    vector<double> price = {0.30,0.60,0.80};

    int i=price.size();

    int probofhead = (price.size()+1)/2;

    vector<vector<double>> dp(3005,vector<double>(3005,-1));
    cout<<probabilityofgettingheadwithitsanswer(price,i,probofhead,dp);
}