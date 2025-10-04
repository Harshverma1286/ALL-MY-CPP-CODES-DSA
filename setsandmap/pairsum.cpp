#include<iostream>
#include<map>
#include<utility>

using namespace std;

bool findpairs(int arr[],int n){
    map<int,pair<int,int>> mp;
    for(int i=0;i<=n-1;i++){
        for(int j=i+1;j<n;j++){
            int sum = arr[i]+arr[j];
            if(mp.find(sum)==mp.end()){
                mp[sum] = make_pair(i,j);
            }
            else{
                pair<int,int> pp;
                cout<<"("<<pp.first<<")"<<"("<<pp.second<<")"<<endl;
                return true;
            }
        }
        cout<<"no pairs found ";
        return false;

        
    }
}

int main(){
    int arr[] ={2,2,2,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    findpairs(arr,n);
}