#include<iostream>
#include<string>
using namespace std;

string removetraillingspaces(string& str){
    int i=0;
    int n = str.length();
    string ans = "";
    while(i<n){
        while(i<n && str[i]==' '){
            i++;
        }
        string temp = "";
        while(i<n && str[i]!=' '){
            temp+=str[i];
            i++;
        }

        if(!temp.empty()){
            if(!ans.empty()){
                ans+=' ';
            }
            ans+=temp;
        }
    }
    return ans;
}

void reversestring(string& ans,int i,int j){
    while(i<j){
        swap(ans[i],ans[j]);
        i++;
        j--;
    }
}

string reversewords(string str){
    string ans = removetraillingspaces(str);

    reversestring(ans,0,ans.length()-1);

    int start = 0;
    int end = 0;
    int n = ans.length();

    while(start<n){
        while(end<n && ans[end]!=' '){
            end++;
        }
        reversestring(ans,start,end-1);
        start = end+1;
        end = start;
    }
    return ans;
}

int main(){
    string str = "the sky is blue";

    cout<<reversewords(str);
}