#include<iostream>
#include<vector>
using namespace std;

int maxsatisfied(vector<int>& customers,vector<int>& grumpy,int minutes){
    int n = customers.size();
    int maxidx =0;
    int prevsat = 0;
    for(int i=0;i<minutes;i++){
        if(grumpy[i]==1){
            prevsat+=grumpy[i];
        }
    }
    int i=1;
    int j=minutes;
    int lowsat = prevsat;
    while(j<n){
        prevsat = prevsat+((grumpy[i]==1 ? customers[j] : 0)) - ((grumpy[i-1]==1 ? customers[i-1] : 0));

        if(prevsat>lowsat){
            lowsat = prevsat;
            maxidx = i;
        }
        i++;
        j++;
    }

    for(int i=maxidx;i<maxidx+minutes;i++){
        grumpy[i]=0;
    }

    int maximumsum = 0;
    for(int i=0;i<n;i++){
        if(grumpy[i]==0){
            maximumsum+=customers[i];
        }
    }
    return maximumsum;
}

int main(){
    vector<int> customers = {1,0,1,2,1,1,7,5};
    vector<int> grumpy = {0,1,0,1,0,1,0,1};
    int minutes = 3;

    cout<<maxsatisfied(customers,grumpy,minutes);
}