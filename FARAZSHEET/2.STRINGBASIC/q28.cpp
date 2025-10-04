#include<iostream>
#include<string>
using namespace std;

int main(){
    string str ="hello";

    string ans ="";

    int position = 4;
    if(position>str.length()){
        cout<<"string cannot be inserted at position "<<position;
        return 0;
    }
    string insert = "x";

    for(int i=0;i<=position-1;i++){
        ans+=str[i];
    }
    ans+=insert;
    for(int i=position;i<=str.length();i++){
        ans+=str[i];
    }
    cout<<ans;
}