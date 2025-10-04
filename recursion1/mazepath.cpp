#include<iostream>
using namespace std;

int mazepath(int m,int n,int i,int j,string ans){
    if(i==m-1 && j==n-1){
        cout<<ans<<endl;
        return 1;
    }
    if(i>m-1 || j>n-1) return 0;
    else return mazepath(m,n,i+1,j,ans+'R')+mazepath(m,n,i,j+1,ans+'D');
}

int main(){
    int m = 2;
    int n = 2;
    int i=0;
    int j=0;
    string ans = "";
    cout<<mazepath(m,n,i,j,ans);
}