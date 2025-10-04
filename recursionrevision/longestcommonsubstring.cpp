#include<iostream>
#include<string>
using namespace std;

int longestsubstring(string& s1, string& s2,int i,int j,int length){
    if(i<0 || j<0){
        return length;
    }
    if(s1[i]==s2[j]){
        length = longestsubstring(s1,s2,i-1,j-1,length+1);
    }
    int length1 = longestsubstring(s1,s2,i-1,j,0);
    int length2 = longestsubstring(s1,s2,i,j-1,0);

    return max(length,max(length1,length2));
}

int main(){
    string s1 = "abcde";
    string s2 = "abfde";
    int i = s1.length()-1;
    int j = s2.length()-1;
    int length = 0;
    cout<<longestsubstring(s1,s2,i,j,length);
}