#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
#include<queue>

using namespace std;

void addedge(int src,int dest,bool isbidirectional,vector<list<int>>& graph){
    graph[src].push_back(dest);
    if(isbidirectional){
        graph[dest].push_back(src);
    }
}

bool ifpath(int source,int destination,vector<list<int>>& graph,unordered_set<int>& isvertices){
    queue<int> q;

    q.push(source);

    isvertices.insert(source);

    while(q.size()>0){
        int val = q.front();
        q.pop();
        if(val==destination) return true;

        for(auto neighbours:graph[val]){
            if(isvertices.find(neighbours)==isvertices.end()){
                isvertices.insert(source);
                q.push(neighbours);
            }
        }
    }
    return false;
}

bool ifispath(int source,int destination,vector<list<int>>& graph,unordered_set<int>& isvertices){
    return ifpath(source,destination,graph,isvertices);
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

    bool ans = ifispath(source,destination,graph,isvertices);

    if(ans==true){
        cout<<"yes there exist a path";
    }
    else{
        cout<<"no there does not exist any path";
    }
}