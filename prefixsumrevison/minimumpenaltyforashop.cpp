#include<iostream>
#include<vector>
#include<string>
#include<limits.h>
using namespace std;

int bestclosingtime(string customers){
    int n = customers.length();

    vector<int> pre(n+1);
    int count = 0;

    for(int i=0;i<n;i++){
        if(customers[i]!='N'){
            pre[i] = count;
        }
        else{
            pre[i] = count;
            count++;
        }
    }
    pre[n] = count;

    vector<int> suff(n+1);
    count = 0;

    suff[n] = 0;

    for(int i=n-1;i>=0;i--){
        if(customers[i]=='Y'){
            count++;
            suff[i] = count;
        }
        else{
            suff[i] = count;
        }
    }

    for(int i=0;i<pre.size();i++){
        pre[i] = pre[i]+suff[i];
    }

    int min = INT_MAX;

    for(int i=0;i<pre.size();i++){
        if(min>pre[i]){
            min = pre[i];
        }
    }
    for(int i=0;i<pre.size();i++){
        if(pre[i]==min){
            return i;
        }
    }
    return n;
}

int main(){
    string customers = "YYNY";

    cout<<bestclosingtime(customers);
}