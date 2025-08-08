#include<iostream>
#include<vector>
using namespace std;

double rockwiningprobability(int rock,int sicissor,int paper,vector<vector<vector<double>>>& dp){
    if(rock==0) return 0;
    if(sicissor==0) return 0;
    if(paper==0) return 1.0;

    double ans = 0;

    if(dp[rock][sicissor][paper]>-0.9) return dp[rock][sicissor][paper];

    double total = rock*sicissor + sicissor*paper + rock*paper;

    ans+=rockwiningprobability(rock,sicissor-1,paper,dp) * ((rock*sicissor)/total);
    ans+=rockwiningprobability(rock,sicissor,paper-1,dp) * ((sicissor*paper)/total);
    ans+=rockwiningprobability(rock-1,sicissor,paper,dp) * ((paper*rock)/total);

    return dp[rock][sicissor][paper] = ans;
}

double sicissorwinningprobability(int rock,int sicissor,int paper,vector<vector<vector<double>>>& dp){
    if(rock==0) return 1.0;
    if(sicissor==0) return 0;
    if(paper==0) return 0;

    double ans = 0;

    if(dp[rock][sicissor][paper]>-0.9) return dp[rock][sicissor][paper];

    double total = rock*sicissor + sicissor*paper + rock*paper;

    ans+=sicissorwinningprobability(rock,sicissor-1,paper,dp) * ((rock*sicissor)/total);
    ans+=sicissorwinningprobability(rock,sicissor,paper-1,dp) * ((sicissor*paper)/total);
    ans+=sicissorwinningprobability(rock-1,sicissor,paper,dp) * ((paper*rock)/total);

    return dp[rock][sicissor][paper] = ans;
}

double paperwiningprobability(int rock,int sicissor,int paper,vector<vector<vector<double>>>& dp){
    if(rock==0) return 0;
    if(sicissor==0) return 1;
    if(paper==0) return 0;

    double ans = 0;

    if(dp[rock][sicissor][paper]>-0.9) return dp[rock][sicissor][paper];

    double total = rock*sicissor + sicissor*paper + rock*paper;

    ans+=paperwiningprobability(rock,sicissor-1,paper,dp) * ((rock*sicissor)/total);
    ans+=paperwiningprobability(rock,sicissor,paper-1,dp) * ((sicissor*paper)/total);
    ans+=paperwiningprobability(rock-1,sicissor,paper,dp) * ((paper*rock)/total);

    return dp[rock][sicissor][paper] = ans;
}





int main(){
    int rock = 2;
    int sicissor = 2;
    int paper = 2;

    vector<vector<vector<double>>> dp(105,vector<vector<double>>(105,vector<double>(105,-1)));
    cout<<rockwiningprobability(rock,sicissor,paper,dp)<<endl;
    dp = vector<vector<vector<double>>>(105, vector<vector<double>>(105, vector<double>(105, -1)));
    cout<<sicissorwinningprobability(rock,sicissor,paper,dp)<<endl;
    dp = vector<vector<vector<double>>>(105, vector<vector<double>>(105, vector<double>(105, -1)));
    cout<<paperwiningprobability(rock,sicissor,paper,dp);
}