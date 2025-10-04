#include<iostream>
using namespace std;

int main(){
    int m = 2;
    int n = 3;
    int p = 3;
    int q = 4;

    int a[m][n] ={{1,2,3},{4,5,6}};
    int b[p][q] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    if(n==p){
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
                for(int k=0;k<p;k++){
                    res[i][j]+=a[i][k]*b[k][j];
                }
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"matrices cannot be multiplied";
    }
}