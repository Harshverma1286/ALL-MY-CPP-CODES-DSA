#include<iostream>
#include<vector>
using namespace std;

void setzeroes(vector<vector<int>>& matrix){
    int m = matrix.size();
    int n = matrix[0].size();

    bool firstrow = false;
    bool firstcol = false;

    for(int j=0;j<n;j++){
        if(matrix[0][j]==0){
            firstrow = true;
            break;
        }
    }

    for(int i=0;i<m;i++){
        if(matrix[i][0]==0){
            firstcol = true;
            break;
        }
    }

    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            if(matrix[i][j]==0){
                matrix[i][0] = 0;
                matrix[0][j] =0;
            }
        }
    }

    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            if(matrix[i][0]==0 || matrix[0][j]==0){
                matrix[i][j]=0;
            }
        }
    }

    if(firstrow){
        for(int j=0;j<n;j++){
            matrix[0][j]=0;
        }
    }

    if(firstcol){
        for(int i=0;i<m;i++){
            matrix[i][0]=0;
        }
    }
    return;
}

int main(){

    vector<vector<int>> matrix = {
        {1,1,1},
        {1,0,1},
        {1,1,1}};


        setzeroes(matrix);

   

    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}