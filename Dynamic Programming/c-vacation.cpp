#include<iostream>
#include<vector>
using namespace std;

void findingmaxpoints(vector<vector<int>>& arr,int& maxpoints,bool a,bool b,bool c,int i){
    if(i>=arr.size()) return;
    if(a==true && b==true && c==true){
        int val = 0;
        int fans = 0;
        for(int j=0;j<arr[i].size();j++){
            if(fans<arr[i][j]){
                fans = arr[i][j];
                val = j;
            }
        }
        maxpoints+=fans;
        if(val==0){
            findingmaxpoints(arr,maxpoints,false,true,true,i+1);
        }
        if(val==1){
            findingmaxpoints(arr,maxpoints,true,false,true,i+1);
        }
        if(val==2){
            findingmaxpoints(arr,maxpoints,true,true,false,i+1);
        }
    }
    else if(a==true && b==true && c==false){
        int fans = 0;
        if(arr[i][1]<arr[i][2]){
            fans = arr[i][2];
            maxpoints+=fans;
            findingmaxpoints(arr,maxpoints,true,false,true,i+1);
        }
        else{
            fans = arr[i][1];
            maxpoints+=fans;
            findingmaxpoints(arr,maxpoints,false,true,true,i+1);
        }
    }
    else if(a==true && b==false && c==true){
        int fans = 0;
        if(arr[i][1]>arr[i][2]){
            fans = arr[i][1];
            maxpoints+=fans;
            findingmaxpoints(arr,maxpoints,false,true,true,i+1);
        }
        else{
            fans = arr[i][2];
            maxpoints+=fans;
            findingmaxpoints(arr,maxpoints,true,true,false,i+1);
        }
    }
    else if(a==false && b==true && c==true){
        int fans = 0;
        if(arr[i][1]>arr[i][2]){
            fans = arr[i][1];
            maxpoints+=fans;
            findingmaxpoints(arr,maxpoints,true,false,true,i+1);
        }
        else{
            fans = arr[i][2];
            maxpoints+=fans;
            findingmaxpoints(arr,maxpoints,true,true,false,i+1);
        }
    }
}

int main(){
    vector<vector<int>> arr = {{6,7,8},{8,8,3},{2,5,2},{7,8,6},{4,6,8},{2,3,4},{7,5,1}};
    int maxpoints = 0;
    int i = 0;
    findingmaxpoints(arr,maxpoints,true,true,true,i);
    cout<<maxpoints;
}