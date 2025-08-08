#include<iostream>
#include<vector>
using namespace std;

bool isvalid(vector<int> nums,vector<int>& changeindices,int mid,int sum){
    if(mid<nums.size()) return false;
    if(mid<nums.size()+sum) return false;
    vector<int> visited(nums.size(),0);

    int count = 0;
    int value = 0;

    for(int i=mid-1;i>=0;i--){
        if(!visited[changeindices[i]-1]){
            visited[changeindices[i]-1]=1;
            value+=1;
            count+=nums[changeindices[i]-1];
        }
        else{
            if(count>0){
                count-=1;
                if(count<0) count =0;
            }
        }
    }

    if(count==0 && value == nums.size()) return true;
    else return false;
}

int earliestsecondtomarkindices(vector<int>& nums,vector<int>& changeindices){
    int low = 0;
    int high = changeindices.size();
    int ans =-1;
    int sum = 0;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
    }

    while(low<=high){
        int mid = low+(high-low)/2;
        if(isvalid(nums,changeindices,mid,sum)==true){
            ans = mid;
            high = mid-1;
        }
        else low = mid+1;
    }
    return ans;
}

int main(){
    vector<int> nums = {2,2,0};
    vector<int> changeindices = {2,2,2,2,3,2,2,1};

    cout<<earliestsecondtomarkindices(nums,changeindices);
}