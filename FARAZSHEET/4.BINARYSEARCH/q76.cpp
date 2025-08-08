#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int median(vector<vector<int>>& mat){
    int m = mat.size();
    int n = mat[0].size();

    vector<int> ans;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            ans.push_back(mat[i][j]);
        }
    }

    sort(ans.begin(),ans.end());

    int low = 0;
    int high = ans.size();

    int mid = (low+high)/2;

    if(mat.size()%2==0){
        return ans[mid+1];
    }
    else{
        return ans[mid];
    }
}


int main(){
    vector<vector<int>> mat = {{1,3,5},{2,6,9},{3,6,9}};

    cout<<median(mat);
}