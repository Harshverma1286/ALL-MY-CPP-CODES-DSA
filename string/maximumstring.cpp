#include<iostream>
#include<string>
#include<vector>

using namespace std;

int maximumvalue(vector<string>& strs){
    vector<int> arr;

    for(int i=0;i<strs.size();i++){
        
        arr.push_back(strs[i].length());

    }

    int max = 0;
    int idx = 0;
    for(int i=0;i<arr.size();i++){
        if(max<arr[i]){
            max = arr[i];
            idx = i;
        }
    }
    return idx;
}

int main(){
    vector<string> strs ={"alic3","bob","3","4","00008"};
    cout<<maximumvalue(strs);


}