#include<iostream>
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
    int n = 16;

    string conv = converttobinary(n);

    int count = 0;
    for(int i=0;i<conv.length();i++){
        if(conv[i]=='1'){
            count++;
        }
    }
    cout<<count;
}