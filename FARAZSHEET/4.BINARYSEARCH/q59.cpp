#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int>  findrightinterval(vector<vector<int>>& intervals){
    int n = intervals.size();

    vector<int> ans(n,-1);

    vector<vector<int>> startinterval(n);

    for(int i=0;i<n;i++){
        startinterval[i] = {intervals[i][0],i};
    }
    sort(startinterval.begin(),startinterval.end());

    for(int i=0;i<n;i++){
        int end = intervals[i][1];

        int low = 0;
        int high = n-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(startinterval[mid][0]>=end){
                ans[i] = startinterval[mid][1];
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
    }
    return ans;
}

int main(){
    vector<vector<int>> intervals = {{3,4},{2,3},{1,2}};

    vector<int> finalans = findrightinterval(intervals);

    for(int i=0;i<finalans.size();i++){
        cout<<finalans[i]<<" ";
    }
}