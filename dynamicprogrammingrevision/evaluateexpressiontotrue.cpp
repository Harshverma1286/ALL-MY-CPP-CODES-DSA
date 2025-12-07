#include<iostream>
#include<string>
#include<vector>
using namespace std;

int evaluateexpressiontotrue(string& s,int i,int j,bool istrue,vector<vector<vector<int>>>& dp){
    if(i>j) return 0;

    if(i==j){
        if(istrue==true){
            if(s[i]=='T') return 1;
            else return 0;
        }
        else{
            if(s[i]=='F') return 1;
            else return 0;
        }
    }

    if(dp[i][j][istrue]!=-1) return dp[i][j][istrue];

    int ans = 0;

    for(int k=i+1;k<=j-1;k+=2){
        int lf,rf,lt,rt;
        lf = evaluateexpressiontotrue(s,i,k-1,false,dp);
        lt = evaluateexpressiontotrue(s,i,k-1,true,dp);
        rt = evaluateexpressiontotrue(s,k+1,j,true,dp);
        rf = evaluateexpressiontotrue(s,k+1,j,false,dp);

        if(s[k]=='&'){
            if(istrue==true){
                ans = ans+(lt*rt);
            }
            else{
               ans = ans + (lf*rt) + (lt*rf) + (lf*rf);
            }
        }
        else if(s[k]=='|'){
            if(istrue==true){
                ans = ans+(lt*rt)+(lt*rf)+(lf*rt);
            }
            else{
                ans = ans+(lf*rf);
            }
        }
        else if(s[k]=='^'){
            if(istrue==true){
                ans = ans+(lf*rt)+(lt*rf);
            }
            else{
                ans = ans+(lt*rt)+(lf*rf);
            }
        }
    }
    return dp[i][j][istrue]=ans;
}

int main(){
    string s = "T^F&T";

    int i=0;
    int j=s.length()-1;

    vector<vector<vector<int>>> dp(s.length()+1,vector<vector<int>>(s.length()+1,vector<int>(2,-1)));

    bool istrue = true;

    int finalans = evaluateexpressiontotrue(s,i,j,istrue,dp);

    cout<<finalans;
}