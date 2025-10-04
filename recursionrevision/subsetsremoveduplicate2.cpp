#include <iostream> 
#include <vector> 
#include <algorithm>
using namespace std;
void helper(vector<int>& ans, vector<int>& nums, vector<vector<int>>& finalans, int idx) { 
    finalans.push_back(ans);
    for (int i = idx; i < nums.size(); i++) { 
       if (i > idx && nums[i] == nums[i - 1]) continue; 
     // Skip duplicates 
         ans.push_back(nums[i]); 
        helper(ans, nums, finalans, i + 1); ans.pop_back(); // Backtrack
    } 
}
vector<vector<int>> subsetsWithDup(vector<int>& nums){ 
vector<int> ans;
vector<vector<int>> finalans;
sort(nums.begin(), nums.end());
       // Sort to handle duplicates 
helper(ans, nums, finalans, 0); return finalans;
}
int main() { 
 vector<int> nums = {1, 2, 2};
vector<vector<int>> result = subsetsWithDup(nums); 
for (const auto& subset : result) { 
 for (int num : subset) cout << num << " ";
cout << endl;
} 
return 0;
}