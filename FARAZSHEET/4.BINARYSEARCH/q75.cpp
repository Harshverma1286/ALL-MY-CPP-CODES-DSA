#include<iostream>
#include<vector>
using namespace std;

bool searchmatrix(vector<vector<int>>& matrix,int target){
    int m = matrix.size();
    int n = matrix[0].size();

    for(int i=0;i<m;i++){
        int low = 0;
        int high = n-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(matrix[i][mid]==target){
                return true;
            }
            else if(matrix[i][mid]<target){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
    }
    return false;
}

int main(){
    vector<vector<int>> matrix = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};

    int target = 5;

    bool ans = searchmatrix(matrix,target);

    if(ans==true){
        cout<<"TRUE";
    }
    else{
        cout<<"FALSE";
    }

}