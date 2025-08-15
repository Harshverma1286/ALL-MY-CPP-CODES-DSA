#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
#include<queue>
using namespace std;

void bfs(int src,vector<list<int>>& graph,unordered_set<int>& isvisited){
    queue<int> q;
    q.push(src);

    isvisited.insert(src);

    while(q.size()>0){
        int idx = q.front();
        q.pop();

        for(auto neighbours:graph[idx]){
            if(isvisited.find(neighbours)==isvisited.end()){
                isvisited.insert(neighbours);
                q.push(neighbours);
            }
        }
    }
}

void addedge(int src,int dest,bool bidirectional,vector<list<int>>& graph){
    graph[src].push_back(dest);
    if(bidirectional){
        graph[dest].push_back(src);
    }
}

int main(){
    int vertices;
    cout<<"enter the number of vertices :";
    cin>>vertices;

    vector<list<int>> graph(vertices);

    unordered_set<int> isvisited;

    int edges;
    cout<<"enter the number of edges : ";
    cin>>edges;

    for(int i=0;i<edges;i++){
        int src;
        int dest;
        bool bidirectional;
        cout<<"enter the src,dest,bidirectional : ";
        cin>>src>>dest>>bidirectional;
        addedge(src,dest,bidirectional,graph);
    }


    int connectedcomponentcount = 0;
    for(int i=0;i<vertices;i++){
        if(isvisited.find(i)==isvisited.end()){
            bfs(i,graph,isvisited);
            connectedcomponentcount++;
        }
    }
    cout<<connectedcomponentcount;
}