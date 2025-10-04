#include<iostream>
#include<vector>
using namespace std;

bool searchmatrix(vector<vector<int>>& matrix,int target){
    int m = matrix.size();
    int n = matrix[0].size();

    int low = 0;
    int high = (m*n)-1;

    while(low<=high){
        int mid = low+(high-low)/2;
        int row = mid/n;
        int column = mid%n;

        if(matrix[row][column]==target){
            return true;
        }
        else if(matrix[row][column]<target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return false;
}

int main(){
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};

    int target =3;

    bool ans = searchmatrix(matrix,target);

    if(ans==true){
        cout<<"TRUE";
    }
    else{
        cout<<"FALSE";
    }
}