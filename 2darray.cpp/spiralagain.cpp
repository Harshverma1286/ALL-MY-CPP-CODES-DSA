#include<iostream>
using namespace std;

int main(){
    int m = 4;
    int n = 4;


    int arr[m][n] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    int sr = 0;
    int ec = n-1;
    int er = n-1;
    int sc = 0;

    while(sr<=er && sc<=ec){
        for(int j=sc;j<=ec;j++){
            cout<<arr[sr][j]<<" ";
        }
        sr++;
        if(sr>=er && sc>=ec) break;
        for(int i=sr;i<=er;i++){
            cout<<arr[i][ec]<<" ";
        }
        ec--;
        if(sr>=er && sc>=ec) break;
        for(int j=ec;j>=sc;j--){
            cout<<arr[er][j]<<" ";
        }
        er--;
        if(sr>=er && sc>=ec) break;
        for(int i=er;i>=sr;i--){
            cout<<arr[i][sc]<<" ";
        }
        sc++;
        if(sr>=er && sc>=ec) break;
    }


}