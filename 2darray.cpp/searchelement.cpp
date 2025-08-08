#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<vector<int>> arr ={
        {1,4,7,11,15},
        {2,5,8,12,19},
        {3,6,9,16,22},
        {10,13,14,17,24},
        {18,21,23,26,30}
    };

    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    int target = 5;

    int i=0;
    int j = arr[0].size()-1;
    bool flag = false;

    while(i<arr.size()-1 && j>=0){
        if(arr[i][j]==target){
            flag = true;
            break;
        }
        else if(arr[i][j]>target){
            j--;
        }
        else{
            i++;
        }
    }
   if(flag==true){
    cout<<"yes the element is present";
   }
   else{
    cout<<"element is not present in the array";
   }

   return 0;
    

    
}