#include<iostream>
using namespace std;

int main(){
    int m = 3;
    int n = 3;

    int arr[m][n] ={{0,0,0},{0,5,0},{0,0,0}};
    bool flag = true;

    int countzero = 0;
    int countnumbers = 0;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==0){
                countzero++;
            }
            else{
                countnumbers++;
            }
        }
    }

    if(countzero<countnumbers){
        flag = false;
    }
    if(flag==true){
        cout<<"it is an sparse matrix";
    }
    else{
        cout<<"it is not a sparse matrix";
    }
}