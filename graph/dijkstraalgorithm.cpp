#include<iostream>
#include<list>
#include<vector>
#include<unordered_set>
#include<unordered_map>
#include<queue>
#include<limits.h>
#define pp pair<int,int>

using namespace std;

void addedge(int src,int dest,bool bidir,int wt,vector<list<pp>>& graph){
    graph[src].push_back({dest,wt});
    if(bidir){
        graph[dest].push_back({src,wt});
    }
}

int dijkstraalgorithm(int vertices,vector<list<pp>>& graph,int src,int dest){
    priority_queue<pp,vector<pp>,greater<pp>> pq;
    unordered_map<int,int> mp;
    unordered_set<int> visited;

    vector<int> via(vertices,-1);

    for(int i=0;i<vertices;i++){
        mp[i] = INT_MAX;
    }

    pq.push({0,src});

    mp[src] = 0;

    while(pq.size()>0){
        auto p = pq.top();
        if(visited.find(p.second)!=visited.end()){
            pq.pop();
            continue;
        }
        visited.insert(p.second);
        pq.pop();
        for(auto neighbours:graph[p.second]){
            if(visited.find(neighbours.first)==visited.end() && mp[neighbours.first]>(neighbours.second+p.first)){
                int val = neighbours.second+p.first;
                pq.push({val,neighbours.first});
                mp[neighbours.first] = val;
                via[neighbours.first] = p.second;
            }
        }
    }

    if(mp[dest]==INT_MAX) return -1;
    else return mp[dest];
}

int main(){
    int vertices;
    cout<<"enter the number of vertices : ";
    cin>>vertices;

    vector<list<pp>> graph(vertices);

    int edges;
    cout<<"enter the number of edges : ";
    cin>>edges;

    for(int i=0;i<edges;i++){
        int src;
        int dest;
        int wt;
        cout<<"enter the src,dest ,wt : ";
        cin>>src>>dest>>wt;
        addedge(src,dest,true,wt,graph);
    }

    int src;
    cin>>src;
    int dest;
    cin>>dest;

    cout<<dijkstraalgorithm(vertices,graph,src,dest);
}