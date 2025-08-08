#include<iostream>
#include<string>
using namespace std;

int main(){
    string s ="abjkoe";

    int countsub = 0;
    int notcountsub = 0;

    for(int i=0;i<s.length();i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||s[i] == 'u'){
            countsub++;
        }
        else{
            notcountsub=countsub*(countsub+1)/2;
            countsub=0;
        }
        notcountsub+=countsub*(countsub+1)/2;
    }
    cout<<notcountsub;
}
