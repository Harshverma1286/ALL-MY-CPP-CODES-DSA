#include<iostream>
using namespace std;

int main(){
    int n = 4;
    int m = 4;
    int matrix[n][m] = {{0,1,1,1},{0,0,1,1},{0,0,0,0},{1,1,1,1}};

    int prevcount = 0;
    int count = 0;
    int idx = 0;


    for(int i=0;i<n;i++){
            int low = 0;
            int high = m-1;
            int ans = 0;
            while(low<=high){
                int mid = low+(high-low)/2;
                if(matrix[i][mid]==1){
                    ans = mid+1;
                    high = mid-1;
                }
                else{
                    low = mid+1;
                }
            }
            if(ans==0){
                count=0;
                if(count>prevcount){
                    prevcount = count;
                    idx =i;
                }
            }
            else{
                count = n-ans+1;
                if(count>prevcount){
                    prevcount=count;
                    idx = i;
                }
            }
    }
    cout<<idx;
}