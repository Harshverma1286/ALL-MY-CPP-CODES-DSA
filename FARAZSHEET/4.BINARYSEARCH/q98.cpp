#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int profitgained(int value,vector<vector<int>>& jobs){
    int low = 0;
    int high = jobs.size()-1;
    int ans=0;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(value<jobs[mid][0]){
            high = mid-1;
        }
        else if(value>=jobs[mid][0]){
            ans = jobs[mid][1];
            low = mid+1;
        }
    }
    return ans;
}

int maxprofitassignment(vector<int>& difficulty,vector<int>& profit,vector<int>& worker){
    int n = difficulty.size();

    vector<vector<int>> jobs;

    for(int i=0;i<n;i++){
        jobs.push_back({difficulty[i],profit[i]});
    }

    sort(jobs.begin(),jobs.end());

    int maxsofar =0;

    for(int i=0;i<jobs.size();i++){
        maxsofar = max(maxsofar,jobs[i][1]);
        jobs[i][1]= maxsofar;
    }

    sort(worker.begin(),worker.end());

    int maxprofit = 0;

    for(int i=0;i<worker.size();i++){
        int value = worker[i];
        maxprofit+=profitgained(value,jobs);
    }

    return maxprofit;
}

int main(){
    vector<int> difficulty = {2,4,6,8,10};
    vector<int> profit = {10,20,30,40,50};

    vector<int> worker = {4,5,6,7};

    cout<<maxprofitassignment(difficulty,profit,worker);
}