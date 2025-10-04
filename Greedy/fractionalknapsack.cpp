#include<iostream>
#include<vector>
#include<queue>
using namespace std;
typedef pair<double,pair<double,double>> pi;

int theactualprofit(vector<int>& profit,vector<int>& weights,int totalweights){
    priority_queue<pi> pq;

    for(int i=0;i<profit.size();i++){
        double val = (double)profit[i]/weights[i];
        pq.push({val,{profit[i],weights[i]}});
    }
    double profits = 0;
    while(pq.size()>0){
        auto p = pq.top();
        pq.pop();
        auto p2 = p.second;
        if(p2.second<=totalweights){
            profits+=p2.first;
            totalweights-=p2.second;
        }
        else{
            double val = (p2.first/p2.second)*totalweights;
            totalweights=0;
            profits+=(int)val;
        }
    }
    return profits;
}

int main(){
    vector<int> profit = {60,100,120};
    vector<int> weights = {10,20,30};
    int totalweights = 50;

    cout<<theactualprofit(profit,weights,totalweights);
}