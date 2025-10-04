#include<iostream>
#include<string>
using namespace std;

string makesmallestpalindrome(string& s){
    int i=0;
    int j=s.length()-1;
    while(i<j){
        if(s[i]!=s[j]){
            if(s[i]<s[j]){
                s[j]=s[i];
            }        
            else{
                s[i]=s[j];
            }
        }
        i++;
        j--;
    }
    return s;
}

int main(){
    string s = "abcd";

    cout<<makesmallestpalindrome(s);
}