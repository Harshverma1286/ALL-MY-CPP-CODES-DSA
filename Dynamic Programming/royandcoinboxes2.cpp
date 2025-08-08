#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n = 7;
    int m = 4;

    vector<int> f(n+1,0);

    for(int i=1;i<=m;i++){
        int left;
        int right;
        cin>>left>>right;

        f[left]+=1;
        f[right+1]-=1;
    }


    for(int i=1;i<n;i++){
        f[i] = f[i]+f[i-1];
    }

    vector<int> c(n+1,0);

    for(int i=0;i<n;i++){
        c[f[i]]++;
    }

    for(int i=c.size()-2;i>=0;i--){
        c[i] = c[i]+c[i+1];
    }

    int q = 4;

    for(int i=1;i<=q;i++){
        int num;
        cin>>num;
        cout<<c[num]<<endl;
    }


}