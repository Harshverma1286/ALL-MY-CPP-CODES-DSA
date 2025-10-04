#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> computeprefixsum(vector<vector<int>>& mat){
    int m = mat.size();
    int n= mat[0].size();

    vector<vector<int>> prefixsum(m+1,vector<int>(n+1,0));

    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            prefixsum[i][j] = mat[i-1][j-1]+prefixsum[i-1][j]+prefixsum[i][j-1]-prefixsum[i-1][j-1];
        }
    }
    return prefixsum;
}

bool isvalid(vector<vector<int>>& prefixsum,int mid,int threshold){
    int m = prefixsum.size()-1;
    int n = prefixsum[0].size()-1;

    for(int i=mid;i<=m;i++){
        for(int j=mid;j<=n;j++){
            int sum = prefixsum[i][j]-prefixsum[i-mid][j]-prefixsum[i][j-mid]+prefixsum[i-mid][j-mid];
            if(sum<=threshold) return true;
        }
    }
    return false;
}

int maxsidelength(vector<vector<int>>& mat,int threshold){
    int m = mat.size();
    int n = mat[0].size();

    vector<vector<int>> prefixsum = computeprefixsum(mat);

    int low = 0;
    int high = min(m,n);
    int ans = 0;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(isvalid(prefixsum,mid,threshold)==true){
            ans=mid;
            low = mid+1;
        }
        else high = mid-1;
    }
    return ans;
}

int main(){
    vector<vector<int>> mat = {{1,1,3,2,4,3,2},{1,1,3,2,4,3,2},{1,1,3,2,4,3,2}};

    int threshold = 4;

    cout<<maxsidelength(mat,threshold);
}