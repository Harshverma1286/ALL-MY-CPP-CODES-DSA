#include<iostream>
#include<vector>
using namespace std;

vector<int> findkthdistanceindices(vector<int>& nums,int key,int k){
    int n = nums.size();

    vector<int> ans;
    vector<int> result;
    vector<bool> visited(n,false);

    for(int i=0;i<n;i++){
        if(nums[i]==key){
            ans.push_back(i);
        }
    }

    if(ans.size()==0){
        return result;
    }
    else{
        for(int i=0;i<ans.size();i++){
            int value = ans[i];
            int j=0;
            while(j<n){
                if(abs(j-value)<=k){
                    if(!visited[j]){
                        result.push_back(j);
                        visited[j] = true;
                    }
                }
                j++;
            }
        }
    }
    return result;
}

int main(){
    vector<int>  nums = {3,4,9,1,3,9,5};

    int key = 9;
    int k = 1;

    vector<int> ans = findkthdistanceindices(nums,key,k);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}