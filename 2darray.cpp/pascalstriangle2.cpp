#include<iostream>
#include<vector>
using namespace std;

int main(){
    int rowindex = 4;

    vector<int> result(rowindex+1,0);
    result[0]=1;
    int add = 0;

    for(int i=1;i<=rowindex;i++){
        for(int j=0;j<=i;j++){
            int temp = result[j];
            result[j]+=add;
            add = temp;
        }
    }

    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }

}