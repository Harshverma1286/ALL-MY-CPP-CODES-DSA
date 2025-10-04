#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int binarytodecimal(string val){
    int ans = 0;
    int count = 0;
    for(int i=val.length()-1;i>=0;i--){
        if(val[i]=='1'){
            ans+=1*pow(2,count);
        }
        count++;
    }
    return ans;
}

int main(){
    string val = "1101";
    cout<<binarytodecimal(val);
}