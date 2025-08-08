#include<iostream>
#include<string>
#include<vector>
using namespace std;

int compress(vector<char>& chars){
    if(chars.size()==1) return 1;

    int i=0;
    int j=0;
    int count =0;
    while(j<chars.size()){
        if(chars[i]==chars[j]){
            j++;
            count++;
        }
        else{
            if(count>1){
                string ans = to_string(count);
                for(int m=0;m<ans.size();m++){
                    chars[++i] = ans[m];
                }
            }
            count = 0;
            i++;
            chars[i] = chars[j];
        }
    }
    if(count>1){
        string ans = to_string(count);
        for(int m=0;m<ans.size();m++){
            chars[++i] = ans[m];
        }
    }
    return i+1;
}

int main(){
    vector<char> chars = {'a','a','b','b','c','c','c'};

    cout<<compress(chars);
}