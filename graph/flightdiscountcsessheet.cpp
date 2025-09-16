#include<iostream>
#include<vector>
#include<list>
#include<limits.h>
#include<queue>
#include <tuple>
#define pp pair<int,int>
#define tt tuple<long long,int,bool>
using namespace std; 

void addedge(int src,int dest,int wt,bool bidirectional,vector<vector<pp>>& graph){
    graph[src].push_back({dest,wt});
    if(bidirectional){
        graph[dest].push_back({src,wt});
    }
}

long long flightdiscoutwithcoupon(int vertices,vector<vector<pp>>& graph){
    priority_queue<tt,vector<tt>,greater<tt>> pq;

    vector<long long> distance_with(vertices+1,LLONG_MAX);

    vector<long long> distance_without(vertices+1,LLONG_MAX);

    pq.push(make_tuple(0, 1, false));
    distance_without[1] = 0;

    while(pq.size()>0){
        tt curr = pq.top();
        pq.pop();
        long long weight = get<0>(curr);
        int parent = get<1>(curr);
        bool flag  = get<2>(curr);

        if(!flag && weight > distance_without[parent]) continue;
        if(flag && weight > distance_with[parent]) continue;


        for(auto neighbours : graph[parent]){
            int next = neighbours.first;
            int wt   = neighbours.second;

            if(!flag){
                if(distance_with[next] > distance_without[parent] + (long long)wt/2){
                    distance_with[next] = distance_without[parent] + (long long)wt/2;
                    pq.push(make_tuple(distance_with[next], next, true));
                }

                if(distance_without[next] > distance_without[parent] + wt){
                    distance_without[next] = distance_without[parent] + wt;
                    pq.push(make_tuple(distance_without[next], next, false));
                }
            }
            else{
                if(distance_with[next] > distance_with[parent] + wt){
                    distance_with[next] = distance_with[parent] + wt;
                    pq.push(make_tuple(distance_with[next], next, true));
                }
            }
        }
    }
    return min(distance_with[vertices],distance_without[vertices]);
}

int main(){
    int vertices,edges;
    cin>>vertices>>edges;

    vector<vector<pp>> graph(vertices+1);

    for(int i=0;i<edges;i++){
        int src;
        int dest;
        int wt;
        cin>>src>>dest>>wt;
        addedge(src,dest,wt,false,graph);
    }

    long long ans = flightdiscoutwithcoupon(vertices,graph);

    cout<<ans;
}