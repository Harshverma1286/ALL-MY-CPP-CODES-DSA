#include<iostream>
using namespace std;

int countbinarysubstrings(string s){
    int current = 1;
    int previous = 0;
    int mn = 0;
    for(int i=1;i<s.length();i++){
        if(s[i]==s[i-1]) current++;
        else{
            mn+= min(previous,current);
            previous = current;
            current = 1;
        }
    }
    mn = mn+min(previous,current);

    return mn;
}

int main(){
    string s = "00110011";

    cout<<countbinarysubstrings(s);
}