#include<iostream>
#include<string>

using namespace std;

int main(){
    string str;
    cin>>str;

    char f = '?';
    char s = '?';

    for(int i=0;i<str.length();i++){
        if(f=='?' || str[i]>f){
            s=f;
            f=str[i];
        }
        else if(str[i]>s){
            s=str[i];
        }
    }
    cout<<s;
}