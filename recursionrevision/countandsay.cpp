#include<iostream>
#include<string>
using namespace std;

string countandsay(int n){
    if(n==1) return "1";
    if(n==2) return "11";

    

    string value = countandsay(n-1);

    int count = 1;

    string ans="";

    for(int i=1;i<=value.length();i++){
        if(i<value.length() && value[i]==value[i-1]){
            count++;
        }
        else{
            ans+=to_string(count);
            ans+=value[i-1];
            count=1;
        }
    }

    return ans;
}

int main(){
    int n;
    cin>>n;

    cout<<countandsay(n)<<" ";
}