#include<iostream>
using namespace std;

long long leftsum(int index,int mid){
    if(mid>index){
        return (long long)(mid+mid-index)*(index+1)/2;
    }
    else return (long long) mid*(mid+1)/2+(index-mid+1);
}

long long rightsum(int index,int mid,int n){
    int rightcount = n-index-1;
    if(mid>rightcount){
        return (long long) (mid+mid-rightcount)*(rightcount+1)/2;
    }
    else{
        return (long long) mid*(mid+1)/2 + (rightcount-mid+1);
    }
}

int maxvalue(int n,int index,int maxsum){
    int low = 1;
    int high = maxsum;

    int ans = 0;
    while(low<=high){
        int mid = low+(high-low)/2;

        long long totalsum = leftsum(index,mid)+rightsum(index,mid,n)-mid;

        if(totalsum<=maxsum){
            ans = mid;
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }

    return ans;
}

int main(){
    int n = 4;
    int index = 2;
    int maxsum = 6;

    cout<<maxvalue(n,index,maxsum);
}