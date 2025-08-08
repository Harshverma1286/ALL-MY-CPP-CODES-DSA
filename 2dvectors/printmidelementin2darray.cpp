#include<iostream>
using namespace std;

int main(){
    int m = 5;

    int arr[m][m]={{1,2,3,4,5},{3,4,5,6,7},{7,6,5,4,3},{8,7,6,5,4},{1,2,37,8,0}};

    int i;
    int j;

    for(i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(i==m/2 || j==m/2){
                cout<<arr[i][j]<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}