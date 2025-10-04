#include<iostream>
using namespace std;

int main(){
    int m = 3;
    int n = 3;

    int arr[m][n] = {{1,2,3},{4,5,6},{7,8,9}};
    int upper[m][n];
    int lower[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i<=j){
                upper[i][j] = arr[i][j];
            }
            else{
                upper[i][j]=0;
            }
        }
    }
      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i>=j){
                lower[i][j] = arr[i][j];
            }
            else{
                lower[i][j]=0;
            }
        }
    }
    

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<upper[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<lower[i][j]<<" ";
        }
        cout<<endl;
    }
}