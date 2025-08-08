#include<iostream>
using namespace std;

int main(){
    int arr[]={0,0,0,0,1,1};
    int n=6;
    int low=0;
    int high = n-1;
    int count =0;
    int target = 1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==target){
            count++;
            cout<<mid;
            
        }
        else if(arr[mid]<=target){
            low=mid+1;
        }
        
        
    else{
        high=mid-1;
    }
    }
    
}