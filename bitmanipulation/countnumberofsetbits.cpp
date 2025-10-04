#include<iostream>
#include<string>
using namespace std;

int main(){
    int n = 5;

    string ans ="";

    int count=0;

    while(n>0){
        if(n%2==0){
            ans='0'+ans;
        }
        else{
            ans='1'+ans;
        }
        n/=2;
    }

    for(int i=0;i<ans.length();i++){
        if(ans[i]=='1'){
            count++;
        }
    }

    cout<<count;
}