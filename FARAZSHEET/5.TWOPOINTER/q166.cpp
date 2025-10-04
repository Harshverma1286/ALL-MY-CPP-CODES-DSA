#include<iostream>
#include<string>
using namespace std;

long long minimumsteps(string s){
    int i=0;
    int j=0;
    long long count = 0;
    while(j<s.length()){
        if(s[j]=='1'){
            j++;
        }
        else if(s[i]=='1' && s[j]=='0' && i<j){
            swap(s[i],s[j]);
            count+=j-i;
            i++;
            j++;
        }
        else if(s[i]=='0' && i<j){
            i++;
        }
        else if(s[i]=='0' && s[j]=='0'){
            j++;
        }
    }
    return count;
}
int main(){
    string s = "100";

    cout<<minimumsteps(s);
}