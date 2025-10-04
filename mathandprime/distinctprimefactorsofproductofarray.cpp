#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

bool isprime(int n){
    if(n==1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}

vector<int> countprimes(int n){
    vector<int> ans;
    vector<bool> sieve(n+1,true);

    sieve[0]=sieve[1]=false;

    for(int i=2;i<=sqrt(n);i++){
        if(isprime(i)){
            int j=i*i;
            while(j<sieve.size()){
                sieve[j]=false;
                j+=i;
            }
        }
    }
    for(int i=2;i<sieve.size();i++){
        if(sieve[i]){
            ans.push_back(i);
        }
    }
    return ans;
}

int distinctprimefactors(vector<int>& nums){
    int max = 0;
    for(int i=0;i<nums.size();i++){
        if(max<nums[i]){
            max = nums[i];
        }
    }

    vector<int> ans = countprimes(max);

    vector<bool> marked(ans.size(),false);

    for(int i=0;i<nums.size();i++){
        int j =0;
        while(j<ans.size()){
            if(nums[i]%ans[j]==0){
                marked[j] = true;
            }
            j++;
        }
    }

    int count = 0;
    for(int i=0;i<marked.size();i++){
        if(marked[i]){
            count++;
        }
    }
    return count;


}

int main(){
    vector<int> nums = {2,4,3,7,10,6};

    cout<<distinctprimefactors(nums);
}