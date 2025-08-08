#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "hello";

    string ans = "";
    int k = 0;

    if(k>str.length()){
        cout<<"elements cannot be removed here at position "<<k;
        return 0;
    }

    for(int i=0;i<k;i++){
        ans+=str[i];
    }
    for(int i=k+1;i<str.length();i++){
        ans+=str[i];
    }
    cout<<ans;

}