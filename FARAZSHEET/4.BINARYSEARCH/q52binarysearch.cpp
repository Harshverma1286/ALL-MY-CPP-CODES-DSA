#include<iostream>
#include<vector>
using namespace std;

char nextgreaterletter(vector<char>& letters,char target){
    int n = letters.size();

    int low = 0;
    int high = n-1;
    int ans = 0;
    while(low<=high){
        int mid = low+(high-low)/2;

        if(letters[mid]>target){
            ans=mid;
            high = mid-1;
        }
        else if(letters[mid]<=target){
            low = mid+1;
        }
    }
    return letters[ans];
}

int main(){
    vector<char> letters = {'c','f','g'};
    char target = 'a';

    cout<<nextgreaterletter(letters,target);
}