#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<climits>
using namespace std;

int minimumproductsubset(vector<int>& arr){
    int nc = 0;
    int zc = 0;
    int pc = 0;
    int positive_product = 1;
    int negative_product = 1;

    for(int i=0;i<arr.size();i++){
        if(arr[i]<0){
            nc++;
            negative_product*=arr[i];
        }
        else if(arr[i]==0){
            zc++;
        }
        else if(arr[i]>0){
            pc++;
            positive_product*=arr[i];
        }
    }
    if(nc>0){
        if(nc%2==0){
            int max_element = INT_MIN;
            for(int i=0;i<arr.size();i++){
                if(arr[i]<0) max_element = max(max_element,arr[i]);
            }
            return (negative_product/max_element)*positive_product;
        }
        else return negative_product*positive_product;
    }
    else if(pc>0){
        if(zc==0){
            sort(arr.begin(),arr.end());
            return arr[0];
        }
        else return 0;
    }
}

int main(){
    vector<int> arr =  {-1,2,3,4,5};

    cout<<minimumproductsubset(arr);
}