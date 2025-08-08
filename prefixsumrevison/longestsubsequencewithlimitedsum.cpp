#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> answerqueries(vector<int>& nums,vector<int>& queries){
    int n = nums.size();
    sort(nums.begin(),nums.end());
    vector<int> ans(n);
    ans[0] = nums[0];
    for(int i=1;i<n;i++){
        ans[i] = nums[i]+ans[i-1];
    }

    vector<int> finalans;

    for(int i=0;i<queries.size();i++){
        int low = 0;
        int high = ans.size()-1;
        int count =0;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(ans[mid]<=queries[i]){
                count=mid+1;
                low = mid+1;
            }
            else high = mid-1;
        }
        finalans.push_back(count);
    }
    return finalans;
}

int main(){
    vector<int> nums = {4,5,2,1};
    vector<int> queries = {3,10,21};

    vector<int> ans = answerqueries(nums,queries);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}