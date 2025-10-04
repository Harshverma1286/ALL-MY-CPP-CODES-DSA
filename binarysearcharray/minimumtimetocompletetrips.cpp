#include<iostream>
#include<vector>
using namespace std;

bool check(long long mid,vector<int>& time,int totaltrips){
    long long count = 0;
    long long value = mid;
    long long speed = 0;
    for(int i=0;i<time.size();i++){
        speed+=value/time[i];
    }
    if(speed<totaltrips) return false;
    else return true;

}

long long minimumtime(vector<int>& time,int totaltrips){
    long long n = time.size();
    long long max = 0;
    for(int i=0;i<time.size();i++){
        if(max<time[i]){
            max=time[i];
        }
    }
    long long low = 1;
    long long high = max*totaltrips;
    long long ans = 0;
    while(low<=high){
        long long mid = low+(high-low)/2;
        if(check(mid,time,totaltrips)==true){
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
    vector<int> time = {1,2,3};
    int totaltrips = 5;

    cout<<minimumtime(time,totaltrips);
}