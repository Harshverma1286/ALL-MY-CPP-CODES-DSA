#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int n = 24;
    string ans = "";

    while(n>0){
        int rem = n%2;
        ans+=to_string(rem);
        n/=2;
    }

    reverse(ans.begin(),ans.end());

    cout<<ans;
}