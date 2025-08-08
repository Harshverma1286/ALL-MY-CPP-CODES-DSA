#include<iostream>
#include<string>
using namespace std;

void reversestring(string& s , int i, int j){
    while(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
}

string reversewords(string s){
    int start = 0;
    int end =0;
    int n = s.length();

    while(start<n){
        while(end<n && s[end]!=' '){
            end++;
        }
        reversestring(s,start,end-1);
        start = end+1;
        end = start;
    }
    return s;
}

int main(){
    string s = "Let's take LeetCode contest";

    cout<<reversewords(s);
}