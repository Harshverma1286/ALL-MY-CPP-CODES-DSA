#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> answerqueries(vector<int>& nums,vector<int>& queries){
    sort(nums.begin(),nums.end());
    int n = nums.size();
    vector<int> ans(n);
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=nums[i];
        ans[i] = sum;
    }

    int m = queries.size();
    vector<int> finalans(m);

    for(int i=0;i<m;i++){
        int low =0;
        int high = n-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(ans[mid]<=queries[i]){
                finalans[i] = mid+1;
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
    }
    return finalans;
}

int main(){
    vector<int> nums = {4,5,2,1};
    vector<int> queries = {3,10,21};

    vector<int> finalresult = answerqueries(nums,queries);

    for(int i=0;i<finalresult.size();i++){
        cout<<finalresult[i]<<" ";
    }
}