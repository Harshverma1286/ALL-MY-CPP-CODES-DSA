#include<iostream>
#include<string>
#include<algorithm>
#include<limits.h>
using namespace std;

int main(){
    string str = "harshisbest";
    int freq[256] = {0};
    char mostoccuringchar = '\0';
    string minoccuringchar = "";
    int maxfrequency =0;
    int minfrequency =100;
    for(int i=0;i<str.length();i++){
        freq[str[i]]++;
    }

    for(int i=0;i<256;i++){
        if(freq[i]>0){
            if(freq[i]>maxfrequency){
                maxfrequency = freq[i];
                mostoccuringchar = (char)i;
            }
            if(freq[i]<minfrequency){
                minfrequency = freq[i];
                minoccuringchar = char(i);
            }
            else if(freq[i]==minfrequency){
                minoccuringchar += (char)i;
            }
        }
    }
    cout<<mostoccuringchar<<" ";
    cout<<minoccuringchar;


}