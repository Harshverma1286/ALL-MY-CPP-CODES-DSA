#include<iostream>
using namespace std;

int main(){
    int x=36;
    int low = 0;
    int high = x;
    while(low<=high){
        int mid = low + (high - low )/2;
        if(mid*mid==x){
            return mid;
        }
        else if(mid*mid>x){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
        cout<<high;        
    }
}