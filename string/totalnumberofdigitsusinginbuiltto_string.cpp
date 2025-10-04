#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int x = 12345;

    string str = to_string(x);

    int len = str.length();

    cout<<len;
}

