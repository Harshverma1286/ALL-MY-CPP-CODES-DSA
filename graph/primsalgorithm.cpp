#include<iostream>
#include<vector>
#include<list>
#include<unordered_map>
#include<unordered_set>
#include<queue>
#include<limits.h>
#define pp pair<int,int>
using namespace std;

void addedge(int src,int dest,int wt,bool bidir,vector<list<pp>>& graph){
    graph[src].push_back({dest,wt});
    if(bidir){
        graph[dest].push_back({src,wt});
    }
}

int prims(int start,vector<list<pp>>& graph,int vertices,vector<int>& parents){
    priority_queue<pp,vector<pp>,greater<pp>> pq;
    unordered_map<int,int> mp;
    unordered_set<int> visited;

    int weights = 0;

    for(int i=1;i<=vertices;i++){
        mp[i] = INT_MAX;
    }

    pq.push({0,start});
    mp[start] = 0;
    int edge_count = 0;

    while(pq.size()>0){
        auto p = pq.top();
        if(visited.find(p.second)!=visited.end()){
            pq.pop();
            continue;
        }
        visited.insert(p.second);
        weights+=p.first;
        pq.pop();
        edge_count++;

        for(auto neighbours:graph[p.second]){
            if(visited.find(neighbours.first)==visited.end() && mp[neighbours.first]>neighbours.second){
                pq.push({neighbours.second,neighbours.first});
                mp[neighbours.first] = neighbours.second;
                parents[neighbours.first] = neighbours.second;
            }
        }
    }
    return weights;
}

int main(){
    int vertices,edges;
    cin>>vertices>>edges;

    vector<list<pp>> graph(vertices+1);

    for(int i=0;i<edges;i++){
        int src;
        int dest;
        int wt;
        cin>>src>>dest>>wt;
        addedge(src,dest,wt,true,graph);
    }

    int start;
    cin>>start;
    vector<int> parents(vertices+1);

    cout<<prims(start,graph,vertices,parents);

    for(int i=0;i<parents.size();i++){
        cout<<i<<"->"<<parents[i];
        cout<<endl;
    }
}