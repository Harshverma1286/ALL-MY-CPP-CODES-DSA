#include<iostream>
#include<vector> 
using namespace std;
class MountainArray {
    public:
        vector<int> arr;
        
        MountainArray(vector<int> a) : arr(a) {}
        
        int get(int index) {
            return arr[index];
        }
    
        int length() {
            return arr.size();
        }
    };


    int peakindexinmountainarray(MountainArray& MountainArr,int target,int low,int high){
        int n = MountainArr.length();
        while(low<high){
            int mid = low+(high-low)/2;

            if(MountainArr.get(mid)<MountainArr.get(mid+1)){
                low = mid+1;
            }
            else high = mid;
        }
        return low;
    }

    int findinincreasingorder(MountainArray& MountainArr,int target,int low,int high){
        int n = MountainArr.length();
        while(low<=high){
            int mid = low+(high-low)/2;
            int value = MountainArr.get(mid);
            if(value==target){
                return mid;
            }
            if(value<target){
                low = mid+1;
            }
            else high = mid-1;
        }
        return-1;
    }

    int findindecreasingorder(MountainArray& MountainArr,int target,int low,int high){
        int n = MountainArr.length();
        while(low<=high){
            int mid = low+(high-low)/2;
            int value = MountainArr.get(mid);
            if(value==target){
                return mid;
            }
            else if(value<target){
                high = mid-1;
            }
            else low = mid+1;
        }
        return -1;
    }

    int findmountainarray(int target,MountainArray& MountainArr){
        int n = MountainArr.length();
        int low = 0;
        int high = n-1;
        int pivotidx = peakindexinmountainarray(MountainArr,target,low,high);

        int index = findinincreasingorder(MountainArr,target,low,pivotidx);

        if(index!=-1) return index;

        else return findindecreasingorder(MountainArr,target,pivotidx+1,n-1);
    }

int main(){
    vector<int> MountainArr = {1,2,3,4,5,3,1};
    MountainArray obj(MountainArr);
    int target = 3;

    cout<<findmountainarray(target,obj);

}