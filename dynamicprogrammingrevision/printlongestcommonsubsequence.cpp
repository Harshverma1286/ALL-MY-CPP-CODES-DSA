#include<iostream>
#include<string>
#include<limits.h>
using namespace std;

// string lcs(string a,string b,string ans,int i,int j){
//     if(i==0 || j==0) return " ";

//     if(a[i-1]==b[j-1]){
//         return ans+lcs(a,b,ans,i-1,j-1);
//     }
//     else return 
// }

int main(){
    string a = "acbcf";

    string b = "abcdaf";

    string ans = "";

    int i = a.length();
    int j = b.length();

    //cout<<lcs(a,b,ans,i,j);
}