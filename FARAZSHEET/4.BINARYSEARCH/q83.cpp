#include<iostream>
#include<vector>
using namespace std;

vector<int> findpeakgrid(vector<vector<int>>& mat){
    int m= mat.size();
    int n =mat[0].size();

    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = low +(high-low)/2;

        int maxrow = 0;
        for(int i=0;i<m;i++){
            if(mat[i][mid]>mat[maxrow][mid]){
                maxrow = i;
            }
        }

        bool left = (mid==0 || mat[maxrow][mid]>mat[maxrow][mid-1]);

        bool right = (mid==n-1 || mat[maxrow][mid]>mat[maxrow][mid+1]);

        if(left && right){
            return {maxrow,mid};
        }
        else if(mid>0 && mat[maxrow][mid-1]>mat[maxrow][mid]){
            high = mid-1;
        }
        else low = mid+1;
    }
    return {-1,-1};
}

int main(){
    vector<vector<int>> mat = {{1,4},{3,2}};

    vector<int> ans = findpeakgrid(mat);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}