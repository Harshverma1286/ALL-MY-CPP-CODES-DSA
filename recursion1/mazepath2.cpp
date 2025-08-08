#include<iostream>
using namespace std;

int mazepath(int m,int n,string ans){
    if(m==1 && n==1){
        cout<<ans<<endl;
        return 1;
    }
    if(m<1 || n<1) return 0;
    else return mazepath(m-1,n,ans+'R')+mazepath(m,n-1,ans+'D');
}

int main(){
    int m = 2;
    int n = 2;
    int i=0;
    int j=0;
    cout<<mazepath(m,n,"");
}