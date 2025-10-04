#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
#include<queue>
#include<limits.h>

using namespace std;

void addedge(int src,int dest,bool isbidirectional,vector<list<int>>& graph){
    graph[src].push_back(dest);
    if(isbidirectional){
        graph[dest].push_back(src);
    }
}

void shortest_path_using_bfs(int source,int destination,vector<list<int>>& graph, unordered_set<int>& isvertices,vector<int>& distances){
    queue<int> q;
    q.push(source);
    isvertices.insert(source);
    distances[source] = 0;
    while(q.size()>0){
        int val = q.front();
        q.pop();

        for(int neighbours:graph[val]){
            if(isvertices.find(neighbours)==isvertices.end()){
                isvertices.insert(neighbours);
                q.push(neighbours);
                distances[neighbours] = distances[val]+1;
            }
        }
    }
}


int main(){
    int vertices;
    cout<<"enter the number of vertices :";
    cin>>vertices;

    vector<list<int>> graph(vertices);

    unordered_set<int> isvertices;

    int edges;
    cout<<"enter the number of edges :";
    cin>>edges;

    for(int i=0;i<edges;i++){
        int src;
        int dest;
        bool isbidirectional;
        cout<<"enter the src , dest, isbidirectional : ";
        cin>>src>>dest>>isbidirectional;
        addedge(src,dest,isbidirectional,graph);
    }

    int source;
    cout<<"enter the source :";
    cin>>source;

    int destination;
    cout<<"enter the destination :";
    cin>>destination;

    vector<int> distances(vertices,INT_MAX);

    shortest_path_using_bfs(source,destination,graph,isvertices,distances);

    for(int i=0;i<distances.size();i++){
        cout<<distances[i]<<" ";
    }

}