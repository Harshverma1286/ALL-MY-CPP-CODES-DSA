#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string converttobinary(int val){
    string ans = "";
    while(val>0){
        int rem = val%2;
        string a = to_string(rem);
        ans+=a;
        val/=2;
        if(val==1){
            ans+="1";
            break;
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){
    int val = 16;
    cout<<converttobinary(val);
}