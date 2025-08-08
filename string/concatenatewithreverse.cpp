#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string str = "pwskills";
    string ans ="";

    for(int i=0;i<str.length();i++){
        ans+=str[i];
    }
    cout<<ans;
    cout<<endl;

    reverse(ans.begin(),ans.end());

    for(int i=0;i<ans.length();i++){
        str+=ans[i];
    }
    cout<<str;


}