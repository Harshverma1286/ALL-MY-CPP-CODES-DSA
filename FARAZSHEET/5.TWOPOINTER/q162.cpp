#include<iostream>
#include<string>
using namespace std;

bool canmakesubsequence(string str1,string str2){
    if(str1.length()<str2.length()) return false;
    int j =0;
    for(int i=0;i<str1.length()&& j<str2.length();i++){
        if(str1[i]==str2[j] || (str1[i]=='z'?'a': str1[i]+1)==str2[j]){
            j++;
        }
    }
    return j==str2.length(); 
}

int main(){
    string str1 = "abc";
    string str2 = "ad";

    bool ans = canmakesubsequence(str1,str2);

    if(ans==true){
        cout<<"TRUE";
    }
    else cout<<"FALSE";
}