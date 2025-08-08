#include<iostream>
using namespace std;

int main(){
    int m = 3;

    int arr[m][m] = {{1,2,3},{4,5,6},{7,8,9}};

    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(i==j || i+j==m-1){
                cout<<arr[i][j]<<" ";
            }
            else{
                cout<<" "<<" ";
            }
        }
        cout<<endl;
    }
}