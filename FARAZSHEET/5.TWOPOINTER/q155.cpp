#include<iostream>
#include<string>
using namespace std;
bool checkpalindrome(string& ans){
    int i=0;
    int j=ans.length()-1;
    while(i<=j){
        if(ans[i]!=ans[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

bool validpalindrome(string s){
    int n = s.length();

    string ans = "";

    for(int i=0;i<n;i++){
        char ch = s[i];
        int ascii = (int)ch;
        if(ascii>=97 && ascii<=122 || ascii>=48 && ascii<=57){
            ans+=ch;
        }
        else if(ascii>=65 && ascii<=90){
            char convert = s[i]+32;
            ans+=convert;
        }
        else continue;
    }
    bool val = checkpalindrome(ans);
    if(val==true) return true;
    else return false;
}

int main(){
    string s = "race a car";

    bool ans = validpalindrome(s);

    if(ans==true){
        cout<<"TRUE";
    }
    else{
        cout<<"FALSE";
    }
}