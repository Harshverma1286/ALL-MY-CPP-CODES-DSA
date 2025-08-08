#include<iostream>
#include<string>
using namespace std;
string binarytodecimal(int n){
    if(n==0) return "";
     return binarytodecimal(n/2)+to_string(n%2);

}

int main(){
    int n = 4;
    cout<<binarytodecimal(n);
}