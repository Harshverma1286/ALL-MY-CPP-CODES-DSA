#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isvalid(vector<int>& houses,vector<int>& heaters,int mid){
    int i=0;
    int j=0;
    while(i<houses.size() && j<heaters.size()){
        if(abs(houses[i]-heaters[j])<=mid){
            i++;
        }
        else j++;
    }
    if(i==houses.size()){
        return true;
    }
    else return false;
}

int findradius(vector<int>& houses,vector<int>& heaters){
    sort(houses.begin(),houses.end());
    sort(heaters.begin(),heaters.end());

    int low = 1;
    int high = 1e7;
    int ans = 0;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(isvalid(houses,heaters,mid)==true){
            ans = mid;
            high = mid-1;
        }
        else low = mid+1;
    }
    return ans;
}

int main(){
    vector<int> houses = {1,2,3};
    vector<int> heaters = {2};

    cout<<findradius(houses,heaters);
}