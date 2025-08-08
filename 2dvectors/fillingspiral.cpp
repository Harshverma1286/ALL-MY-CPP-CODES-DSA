#include<iostream>
using namespace std;

int main(){
    int m = 3;

    int arr[m][m];

    int k=1;
    int minr =0;
    int minc = 0;
    int maxr = m-1;
    int maxc = m-1;

    while(k<=m*m){
        for(int j=minc;j<=maxc;j++){
            arr[minr][j]=k;
            k++;
        }
        minr++;

        for(int i=minr;i<=maxr;i++){
            arr[i][maxc] =k;
            k++;
        }
        maxc--;
        if(minr<=maxr){
        for(int j=maxc;j>=minc;j--){
            arr[maxr][j] = k;
            k++;
        }
        maxr--;
        }
        if(minc<=maxc){
        for(int i=maxr;i>=minr;i--){
            arr[i][minc] = k;
            k++;
        }
        minc++;
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}