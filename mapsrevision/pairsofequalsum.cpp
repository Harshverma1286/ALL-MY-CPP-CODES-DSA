#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main(){
    vector<int> arr =  {65, 30, 7, 90, 1, 9, 8};

    unordered_map<int, pair<int,int>> mp;

    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            int sum = arr[i]+arr[j];
            if(mp.find(sum)!=mp.end()){
                auto p = mp[sum];

                int value1 = p.first;
                int value2 = p.second;
                int value3 = i;
                int value4 = j;

                if(value1!=value3 && value1!=value4 && value2!=value3 && value2!=value4){
                    cout<<value1<<" "<<value2<<" "<<value3<<" "<<value4;
                    return 0;
                }
            }
            mp[sum] = {i,j};
        }
    }
    cout<<" no elements found";
    return 0;
}