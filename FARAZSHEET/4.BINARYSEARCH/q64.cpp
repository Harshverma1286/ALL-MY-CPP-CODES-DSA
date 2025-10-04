#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

vector<int> platesbetweencandles(string s, vector<vector<int>>& queries){
    vector<int> ans;
    vector<int> candleposition;
    vector<int> prefixsum(s.length()+1,0);

    for(int i=0;i<s.length();i++){
        if(s[i]=='|'){
            candleposition.push_back(i);
        }
        prefixsum[i+1] = prefixsum[i]+(s[i]=='*'?1:0);
    }

    for(int i=0;i<queries.size();i++){
        int start = queries[i][0];
        int end = queries[i][1];

        int firstbar =-1;
        int low = 0;
        int high = candleposition.size()-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(candleposition[mid]>=start){
                firstbar = candleposition[mid];
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        int endbar =-1;
        low = 0;
        high = candleposition.size()-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(candleposition[mid]<=end){
                endbar = candleposition[mid];
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        if(firstbar!=-1 && endbar!=-1 && firstbar<endbar){
            ans.push_back(prefixsum[endbar]-prefixsum[firstbar]);
        }
        else{
            ans.push_back(0);
        }
    }
    return ans;
}

int main(){
    string s = "**|**|***|";

    vector<vector<int>> queries = {{2,5},{5,9}};

    vector<int> ans = platesbetweencandles(s,queries);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}