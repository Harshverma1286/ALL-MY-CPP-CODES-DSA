#include<iostream>
#include<string>
using namespace std;

bool checkpalindrome(string& ans,int i,int j){
    while(i<j){
        if(ans[i]!=ans[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

bool validpalindrome(string s){
    int i=0;
    int j = s.length()-1;
    while(i<j){
        if(s[i]!=s[j]){
            return checkpalindrome(s,i+1,j) || checkpalindrome(s,i,j-1);
        }
        i++;
        j--;
    }
    return true;
}

int main(){
    string s = "abca";

    bool ans = validpalindrome(s);

    if(ans== true){
        cout<<"TRUE";
    }
    else{
        cout<<"FALSE";
    }
}