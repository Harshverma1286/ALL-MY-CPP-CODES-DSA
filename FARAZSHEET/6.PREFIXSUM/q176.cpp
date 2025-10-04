#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;

long long minimumremoval(vector<int>& beans){
    sort(beans.begin(),beans.end());

    long long sum = 0;

    for(int i=0;i<beans.size();i++){
        sum+=beans[i];
    }

    long long ans = LLONG_MAX;

    for(int i=0;i<beans.size();i++){
        long long value = beans[i];
        long long cost = sum-(value*(beans.size()-i));
        ans = min(ans,cost);
    }
    return ans;
}

int main(){
    vector<int> beans = {4,1,6,5};

    cout<<minimumremoval(beans);
}