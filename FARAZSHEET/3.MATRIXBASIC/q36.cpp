#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int m =4;
    int n = 4;
    int arr[m][n]={{10,40,50,60},{30,20,48,58},{20,30,40,60},{24,34,54,55}};
    int max = INT_MIN;
    int min = INT_MAX;
    for(int j=0;j<n;j++){
        max = INT_MIN;
        min = INT_MAX; 
        for(int i=0;i<m;i++){
            if(max<arr[i][j]){
                max=arr[i][j];
            }
            if(min>arr[i][j]){
                min=arr[i][j];
            }
        }
        cout<<"max elements in columns "<<j<<" : "<<" is "<<"->"<<max<<endl;
        cout<<"min elements in columns "<<j<<" : "<<" is "<<"->"<<min<<endl;
    }
}