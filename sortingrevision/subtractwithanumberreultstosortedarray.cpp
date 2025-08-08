#include<iostream>
#include<vector>
using namespace std;

bool checkde(vector<int>& count){
    int n = count.size();

    for(int i=1;i<n;i++){
        if(count[i-1]<count[i]){
            return false;
        }
    }
    return true;
}

bool checkin(vector<int>& count){
    int n = count.size();

    for(int i=1;i<n;i++){
        if(count[i-1]>count[i]){
            return false;
        }
    }
    return true;
}

int main(){
    int arr[] = {4,7,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> count;

    int max =0;

    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max =arr[i];
        }
    }

    for(int i=1;i<max;i++){
        for(int j=0;j<n;j++){
            count.push_back(abs(arr[j]-i));
        }
        bool checkincreasing = checkin(count);
        bool checkdecreasing = checkde(count);

        if(checkdecreasing==true || checkincreasing==true){
            cout<<i;
            break;
        }
        else count.clear();
    }
}