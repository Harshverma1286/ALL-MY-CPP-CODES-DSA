#include<iostream>
#include<stack>
using namespace std;

string solve(string val1, string val2,char ch) {
 string s ="";
 s+=val1;
 s.push_back(ch);
 s+=val2;
 return s;
}

int main(){
    string s ="-/*+79483";
    stack<string> val;

    for(int i=s.length()-1;i>=0;i--){
    if (s[i] >= '0' && s[i] <= '9') {
            // If it's a number, push it to the values stack
            val.push(to_string(s[i] - '0')); // Convert char to int
        }
        else{
            string val1 = val.top();
            val.pop();
            string val2 = val.top();
            val.pop();
            string ans = solve(val1,val2,s[i]);
            val.push(ans);
        }
    }
    cout<<val.top()<<endl;
    
}