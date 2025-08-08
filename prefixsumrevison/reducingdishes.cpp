#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxsatisfaction(vector<int>& satisfaction){
    int n = satisfaction.size();

    sort(satisfaction.begin(),satisfaction.end());

    vector<int> suffixsum(n);
    suffixsum[n-1] = satisfaction[n-1];

    for(int i=n-2;i>=0;i--){
        suffixsum[i]=satisfaction[i]+suffixsum[i+1];
    }
    int idx = 0;
    for(int i=0;i<suffixsum.size();i++){
        if(suffixsum[i]>0){
            idx = i;
            break;
        }
    }
    int count = 1;
    int maxans = 0;
    for(int i=idx;i<satisfaction.size();i++){
        maxans+=count*satisfaction[i];
        count++;
    }
    if(maxans<0) return 0;
    else return maxans;
}

int main(){
    vector<int> satisfaction = {-1,-8,0,5,-9};
    cout<<maxsatisfaction(satisfaction);
}