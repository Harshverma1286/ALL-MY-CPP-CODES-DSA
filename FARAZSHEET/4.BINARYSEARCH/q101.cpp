#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

bool isvalid(vector<int>& dist,int mid,double hour){
    int n = dist.size();
    int value = mid;
    float count =0;

    for(int i=0;i<n;i++){
        double traveltime = (double)dist[i]/value;
        if(i==n-1){
            count+=traveltime;
        }
        else{
            count+=ceil(traveltime);
        }
    }
    if(count<=hour) return true;
    else return false;
}

int minspeedontime(vector<int>& dist,double hour){
    int n = dist.size();

    int low = 0;
    int high = 1e7;

    int ans = 0;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(isvalid(dist,mid,hour)==true){
            ans = mid;
            high = mid-1;
        }
        else low = mid+1;
    }
    return ans;
}

int main(){
    vector<int> dist = {1,3,2};
    double hour = 6;

    cout<<minspeedontime(dist,hour);
}
