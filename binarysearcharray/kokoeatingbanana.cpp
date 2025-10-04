#include<iostream>
#include<vector>
using namespace std;

bool check(int mid,vector<int>& piles,int h){
    int count = 0;
    int value = mid;
    for(int i=0;i<piles.size();i++){
        if(count>h) return false;
        if(value>=piles[i]){
            count++;
        }
        else if(piles[i]%value==0){
            count+=piles[i]/value;
        }
        else{
            count+=piles[i]/value+1;
        }
    }
    if(count>h) return false;
    else return true;
}

int mineatingspeed(vector<int>& piles,int h){
    int n = piles.size();
    int max = 0;
    for(int i=0;i<piles.size();i++){
        if(max<piles[i]){
            max = piles[i];
        }
    }
    int low = 1;
    int high = max;
    int ans = 0;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(check(mid,piles,h)==true){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> piles = {3,6,7,11};
    int h = 8;

    cout<<mineatingspeed(piles,h);
}