#include<iostream>
#include<vector>
using namespace std;

vector<int> flightbooking(vector<vector<int>>& bookings,int n){
    int m = bookings.size();

    vector<int> difference(n+1,0);

    for(int i=0;i<m;i++){
        int firstbooking = bookings[i][0]-1;
        int secondbooking = bookings[i][1];
        int max = bookings[i][2];
        difference[firstbooking]+=max;
        difference[secondbooking]-=max;
    }

    vector<int> ans(n);

    ans[0] = difference[0];

    for(int i=1;i<n;i++){
        ans[i] = difference[i]+ans[i-1];
    }
    return ans;
}



int main(){
    vector<vector<int>> bookings = {{1,2,10},{2,3,20},{2,5,25}};
    int n = 5;

    vector<int> ans = flightbooking(bookings,n);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}