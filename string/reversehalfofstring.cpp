#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string str = "pwians";

    int n = str.length();


    reverse(str.begin()+n/2,str.end());

    cout<<str;
}