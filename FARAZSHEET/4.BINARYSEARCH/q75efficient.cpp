#include<iostream>
#include<vector>
using namespace std;

bool searchmatrix(vector<vector<int>>& matrix,int target){
    int m = matrix.size();
    int n = matrix[0].size();

    int row = 0;
    int column = n-1;

    while(row<=m-1 && column>=0){
        if(matrix[row][column]==target){
            return true;
        }
        else if(matrix[row][column]<target){
            row++;
        }
        else{
            column--;
        }
    }
    return false;
}

int main(){
    vector<vector<int>> matrix = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};

    int target = 5;

    bool flag = searchmatrix(matrix,target);

    if(flag==true){
        cout<<"TRUE";
    }
    else{
        cout<<"FALSE";
    }

}