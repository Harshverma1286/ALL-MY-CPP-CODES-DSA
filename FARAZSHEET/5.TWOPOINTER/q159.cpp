#include<iostream>
#include<string>
using namespace std;

string largestmerge(string& word1,string& word2){
    int n = word1.length();
    int m = word2.length();

    int i=0;
    int j=0;
    string ans = "";
    while(i<n && j<m){
        if(word1[i]>word2[j]){
            ans+=word1[i++];
        }
        else if(word2[j]>word1[i]){
            ans+=word2[j++];
        }
        else{
            if(word1.substr(i)>word2.substr(j)){
                ans+=word1[i++];
            }
            else{
                ans+=word2[j++];
            }
        }
    }
    while(i<n){
        ans+=word1[i++];
    }
    while(j<m){
        ans+=word2[j++];
    }
    return ans;
}

int main(){
    string word1 = "cabaa";
    string word2 = "bcaaa";

    cout<<largestmerge(word1,word2);
}