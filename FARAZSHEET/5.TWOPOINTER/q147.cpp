#include<iostream>
#include<vector>
using namespace std;

int minimumrefill(vector<int>& plants,int capacitya,int capacityb){
    int i=0;
    int j=plants.size()-1;
    int value = capacitya;
    int anothervalue = capacityb;
    int count = 0;
    while(i<j){
        if(value<plants[i]){
            count++;
            value = capacitya;
        }
        value-=plants[i];
        i++;
        if(anothervalue<plants[j]){
            count++;
            anothervalue = capacityb;
        }
        anothervalue-=plants[j];
        j--;
    }
    if(i==j){
        if(value<plants[i] && anothervalue<plants[j]){
            count++;
        }
    }
    return count;
}

int main(){
    vector<int> plants = {2,2,3,3};

    int capacitya = 5;
    int capacityb = 5;

    cout<<minimumrefill(plants,capacitya,capacityb);
}