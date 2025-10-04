#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "harsh";

    for(int i=0;i<str.length();i++){
        char ch = str[i];
        int ascii = (int)ch;

        cout<<ch<<"->"<<ascii<<endl;
    }
}

