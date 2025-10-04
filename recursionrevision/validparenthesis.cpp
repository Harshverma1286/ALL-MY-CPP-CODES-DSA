#include<iostream>
#include<string>
using namespace std;

void parenthesis(string str,int op,int cl,int n){
    if(op==n && cl==n){
        cout<<str<<endl;
        return;
    }
    if(op>n){
        return;
    }
    if(op<cl) return;
    if(op<n || str.size()==0){
        char ch = '(';
        parenthesis(str+ch,op+1,cl,n);
    }
    if(op>=cl){
        char ch = ')';
        parenthesis(str+ch,op,cl+1,n);
    }
}

int main(){
    string str = "";
    int n = 3;
    int op = 0;
    int cl = 0;
    parenthesis(str,op,cl,n);
}