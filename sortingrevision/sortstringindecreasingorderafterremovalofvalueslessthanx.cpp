#include<iostream>
#include<string>
using namespace std;

int main(){
    string str ="AZYZXBDJKX";

    string ans = "";
    bool flag = true;

    for(int i=0;i<str.length();i++){
        if(str[i]>='X'){
            ans+=str[i];
        }
    }
    for(int i=0;i<ans.length()-1;i++){
        flag = true;
        for(int j=0;j<ans.length()-i-1;j++){
            if(ans[j]>ans[j+1]){
                continue;
            }
            else{
                swap(ans[j],ans[j+1]);
                flag = false;
            }
        }
        if(flag == true){
            break;
        }
    }
    cout<<ans;
}