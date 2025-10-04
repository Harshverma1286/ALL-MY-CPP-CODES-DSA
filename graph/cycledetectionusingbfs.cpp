#include<iostream>
#include<vector>
#include<queue>
#include<list>
#include<unordered_set>

using namespace std;

void addedge(int src,int dest,bool bidirectional,vector<list<int>>& graph){
    graph[src].push_back(dest);
    if(bidirectional){
        graph[dest].push_back(src);
    }
}

bool findanswithbfs(int src,vector<list<int>>& graph,unordered_set<int>& visited,vector<int>& parent){
    queue<int> q;
    parent[src]=-1;
    visited.insert(src);
    q.push(src);

    while(q.size()>0){
        auto val = q.front();
        q.pop();

        for(auto neighbours:graph[val]){
            if(visited.find(neighbours)!=visited.end() && parent[val]!=neighbours){
                return true;
            }
            if(visited.find(neighbours)==visited.end()){
                q.push(neighbours);
                visited.insert(neighbours);
                parent[neighbours] = val;
            }
        }
    }
}

void bfs(vector<list<int>>& graph,unordered_set<int>& visited){
    vector<int> parent(graph.size());
    bool ans = false;
    for(int i=0;i<graph.size();i++){
        if(visited.find(i)==visited.end()){
            ans = findanswithbfs(i,graph,visited,parent);
            if(ans==true){
                break;
            }
        }
    }
    if(ans==true) cout<<"cycle detected";
    else cout<<"cycle not detected";
}

int main(){
    int vertices;
    cout<<"enter the number of vertices : ";
    cin>>vertices;

    vector<list<int>> graph(vertices);

    int edges;
    cout<<"enter the number of edges :";
    cin>>edges;

    for(int i=0;i<edges;i++){
        int src;
        int dest;
        bool bidirectional;
        cout<<"enter the src, dest : ";
        cin>>src>>dest;
        addedge(src,dest,true,graph);
    }

    unordered_set<int> s;

    bfs(graph,s);
}