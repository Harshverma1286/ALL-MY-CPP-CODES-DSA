#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string s = "physics wallah";
    string t = "wallah physics";

    bool flag = true;

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    int n = t.length();

    for(int i=0;i<n;i++){
        if(t[i]!=s[i]){
            flag = false;
            break;
        }
    }

    if(flag==false){
        cout<<"it is not an anagram";
    }
    else{
        cout<<"it is an anagram";
    }


}