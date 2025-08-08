#include<iostream>
#include<vector>
using namespace std;

vector<int> searchrange(vector<int>& nums,int target){
    vector<int > ans(2,-1);

    int n = nums.size();
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = low+(high-low)/2;

        if(nums[mid]==target){
            if(mid==0||nums[mid-1]!=target){
                ans[0]=mid;
                break;
            }
            else{
                high=mid-1;
            }
        }

        else if(nums[mid]<target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    if(ans[0]!=-1){
        low = ans[0];
        high = n-1;
        while(low<=high){
        int mid = low+(high-low)/2;

        if(nums[mid]==target){
            if(mid==n-1 || nums[mid+1]!=target){
                ans[1] = mid;
                break;
            }
            else{
                low = mid+1;
            }
        }

        else if(nums[mid]<target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    }
    return ans;
   
}

int main(){
    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;
    searchrange(nums,target);
    vector<int> ans =  searchrange(nums,target);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}