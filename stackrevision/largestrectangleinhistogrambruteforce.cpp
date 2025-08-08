#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> heights = {2,4};
    int max = 0;
    for(int i=0;i<heights.size();i++){
        if(max<heights[i]){
            max = heights[i];
        }
    }

    int maxcount = 0;
    int count = 0;
    for(int i=1;i<=max;i++){
        count = 0;
        for(int j=0;j<heights.size();j++){
            if(i<=heights[j]){
                count+=i;
            }
            else{
                if(maxcount<=count){
                    maxcount = count;
                }
                count = 0;
            }
        }
        if(maxcount<=count){
            maxcount = count;
        }
    }

    cout<<maxcount;
}