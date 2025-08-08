#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

vector<int> shortesttochar(string s,char c){
    vector<int> finalans;
    vector<int> ans;

    for(int i=0;i<s.length();i++){
        char ch = s[i];
        if(ch==c){
            ans.push_back(i);
        }
    }

    int min = INT_MAX;


    for(int i=0;i<s.length();i++){
        min = INT_MAX;
        int j =0;
        while(j<ans.size()){
            int value = abs(i-ans[j]);
            if(min>value){
                min = value;
            }
            j++;
        }
        finalans.push_back(min);
    }
    return finalans;
}

int main(){
    string s = "loveleetcode";
    char c = 'e';

    vector<int> ans = shortesttochar(s,c);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}