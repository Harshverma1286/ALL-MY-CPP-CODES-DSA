#include<iostream>
#include<vector>

using namespace std;

int countnegatives(vector<vector<int>>& grid){
    int m = grid.size();
    int n = grid[0].size();

    int ans = 0;
    int count = 0;
    for(int i=0;i<m;i++){
        int low = 0;
        int high = n-1;
        count = 0;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(grid[i][mid]<0){
                if(mid-1>=0 && grid[i][mid-1]<0){
                    high = mid-1;
                }
                else{
                    count = n-mid;
                    break;
                }
            }
            else if(grid[i][mid]>=0){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        ans+=count;
    }
    return ans;
}

int main(){
    vector<vector<int>> grid = {{4,3,2,-1},{3,2,1,-1},{1,1,-1,-2},{-1,-1,-2,-3}};

    cout<<countnegatives(grid);

    return 0;
}