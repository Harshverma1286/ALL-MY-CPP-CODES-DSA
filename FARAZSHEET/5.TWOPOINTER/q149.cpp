#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;


int nextgreaterelement(int n){
    vector<int> ans;

    while(n>0){
        int rem = n%10;
        ans.push_back(rem);
        n/=10;
    }
    reverse(ans.begin(),ans.end());

    int m = ans.size();
    int i= m-2;
    int j= m-1;

    while(i>=0 && ans[i]>=ans[i+1]){
        i--;
    }
    if(i<0) return -1;

    while(ans[j]<=ans[i]){
        j--;
    }
    swap(ans[i],ans[j]);

    reverse(ans.begin()+i+1,ans.end());

    long long finalans =0;
    for(int i=0;i<ans.size();i++){
        finalans = finalans*10 + ans[i];
    }

    if(finalans>INT_MAX) return -1;
    else return finalans;


}

int main(){
    int n = 12;

    cout<<nextgreaterelement(n);
}