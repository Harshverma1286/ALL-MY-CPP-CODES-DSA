#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findcontentchildren(vector<int>& g,vector<int>& s){
    sort(g.begin(),g.end());
    sort(s.begin(),s.end());

    int count = 0;
    int i = 0;
    int j = 0;
    while(i<g.size() && j<s.size()){
        if(g[i]<=s[j]){
            count++;
            i++;
            j++;
        }
        else j++;
    }
    return count;
}

int main(){
    vector<int> g = {1,2,3};
    vector<int> s= {1,1};
    cout<<findcontentchildren(g,s);
}