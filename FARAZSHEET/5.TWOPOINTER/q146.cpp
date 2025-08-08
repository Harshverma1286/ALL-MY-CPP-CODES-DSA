#include<iostream>
#include<vector>
using namespace std;

int maxarea(vector<int>& height){
    int maxdistance = 0;
    int result = 0;
    int i=0;
    int j=height.size()-1;

    while(i<j){
        if(height[i]<height[j]){
            int distance = j-i;
            result = height[i]*distance;
            maxdistance = max(maxdistance,result);
            i++;
        }
        else if(height[j]<height[i]){
            int distance = j-i;
            result = height[j]*distance;
            maxdistance = max(maxdistance,result);
            j--;
        }
        else{
            int distance = j-i;
            result = height[i]*distance;
            maxdistance = max(maxdistance,result);
            i++;
        }
    }
    return maxdistance;
}

int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};

    cout<<maxarea(height);
}