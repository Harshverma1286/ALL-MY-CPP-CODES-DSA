#include<iostream>
#include<vector>
using namespace std;

void findmaximum(vector<string>& s){
    int n = s.size();
    int prevcount = 0;
    string result ="";

    for(int i=0;i<=n-1;i++){
        int count = 0;
        for(int j=0;j<n;j++){
            if(s[i]==s[j]){
                count++;
            }
        }
        if(count>prevcount){
            prevcount = count;
            result = s[i];
        }
        else if(count == prevcount){
            result = min(result,s[i]);
        }
    }
    cout<<result;

}

int main(){
    vector<string> s = {"raghav","harsh","raghav","harsh","lokesh"};
    findmaximum(s);
    
}