#include<iostream>
#include<vector>
using namespace std;

int multiplyandcount(int nums,vector<int>& potions,int success){
    long long required = (success+nums-1)/nums;

    auto it = lower_bound(potions.begin(),potions.end(),required);

    return potions.end()-it;
}

vector<int> successfullpairs(vector<int>& spells,vector<int>& potions,int success){
    vector<int> ans;

    for(int i=0;i<spells.size();i++){
        int nums = spells[i];

        ans.push_back(multiplyandcount(nums,potions,success));
    }
    return ans;
}

int main(){
    vector<int> spells ={5,1,3};
    vector<int> potions = {1,2,3,4,5};
    int success = 7;

    vector<int> ans = successfullpairs(spells,potions,success);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }


}