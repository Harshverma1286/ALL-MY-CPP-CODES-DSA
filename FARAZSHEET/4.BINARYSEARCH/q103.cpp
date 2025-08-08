#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool checksubsequence(string s , string p){
    int i=0;
    int j=0;
    while(i<s.size() && j<p.size()){
        if(s[i]==p[j]){
            j++;
        }
        i++;
    }
    if(j==p.size()) return true;
    else return false;
}

bool isvalid(string s, string p,int mid,vector<int>& removable){
    for(int i=0;i<mid;i++){
        s[removable[i]]='#';
    }

    bool ans = checksubsequence(s,p);

    if(ans==true){
        return true;
    }
    else return false;
}

int maximumremovables(string s,string p,vector<int>& removable){
    int low = 0;
    int high = removable.size();
    int ans = 0;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(isvalid(s,p,mid,removable)==true){
            ans = mid;
            low = mid+1;
        }
        else high = mid-1;
    }
    return ans;
}

int main(){
    string s = "abcacb";
    string p = "ab";
    vector<int> removable = {3,1,0};

    cout<<maximumremovables(s,p,removable);
}