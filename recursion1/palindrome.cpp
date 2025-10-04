#include<iostream>
#include<string> 
using namespace std;

void palindrome(int i,int j,string& ans){
    if(i>j){
        cout<<"it is a palindrome";
        return;
    }
    if(ans[i]!=ans[j]){
        cout<<"it is not a palindrome";
        return;
    }
    palindrome(i+1,j-1,ans);
}

int main(){
    string ans = "racecar";
    int i=0;
    int j = ans.length()-1;
    palindrome(i,j,ans);
}