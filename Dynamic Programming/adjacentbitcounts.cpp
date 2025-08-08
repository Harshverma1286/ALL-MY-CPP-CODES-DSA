#include<iostream>
#include<vector>
#include<string>
using namespace std;

void convertingstring(int n,string str,vector<string>& ans){
    if(str.length()==n){
        ans.push_back(str);
        return;
    }
    convertingstring(n,str+'0',ans);
    convertingstring(n,str+'1',ans);
}

int main(){
    int n = 5;
    int k = 2;
    vector<string> ans;
    string str;
    convertingstring(n,str,ans);
    int count = 0;

    for(int i=0;i<ans.size();i++){
        string str = ans[i];
        int val = 0;
        for(int j=0;j<str.length()-1;j++){
            char ch = str[j];
            char ch2 = str[j+1];
            int num1 = ch-'0';
            int num2 = ch2-'0';
            val+=num1*num2;
        }
        if(val==k) count++;
    }
    cout<<count;
}