#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maximumbeauty(int nums,vector<vector<int>>& items){
    int low = 0;
    int high = items.size()-1;
    int maxbeauty = 0;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(items[mid][0]<=nums){
            maxbeauty = max(maxbeauty,items[mid][1]);
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return maxbeauty;
}

vector<int> maxbeauty(vector<vector<int>>& items,vector<int>& queries){
    sort(items.begin(),items.end());
    vector<int> ans;
    for(int i=1;i<items.size();i++){
        items[i][1] = max(items[i][1],items[i-1][1]);
    }
    ans.reserve(queries.size());

    for(int i=0;i<queries.size();i++){
        ans.push_back(maximumbeauty(queries[i],items));
    }
    return ans;
}

int main(){
    vector<vector<int>> items ={{1,2},{3,2},{2,4},{5,6},{3,5}};

    vector<int> queries = {1,2,3,4,5,6};

    vector<int> ans = maxbeauty(items,queries);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}