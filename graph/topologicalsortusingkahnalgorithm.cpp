#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
#include<queue>

using namespace std;

void topologicalsortusingkahnalgo(int vertices,vector<list<int>>& graph,unordered_set<int>& s){
    vector<int> indegree(vertices,0);

    for(int i=0;i<vertices;i++){
        for(auto neighbours:graph[i]){
            indegree[neighbours]++;
        }
    }

    queue<int> q;

    for(int i=0;i<indegree.size();i++){
        if(indegree[i]==0){
            q.push(i);
            s.insert(i);
        }
    }

    while(q.size()>0){
        int idx = q.front();
        q.pop();

        cout<<idx<<" ";

        for(auto neighbours:graph[idx]){
            if(s.find(neighbours)==s.end()){
                indegree[neighbours]--;
                if(indegree[neighbours]==0){
                    q.push(neighbours);
                    s.insert(neighbours);
                }
            }
        }
    } 
}
void addedges(int src,int dest,bool bidirectional,vector<list<int>>& graph){
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

    unordered_set<int> s;

    int edges;
    cout<<"enter the number of edges:";
    cin>>edges;

    for(int i=0;i<edges;i++){
        int src;
        int dest;
        bool bidirectional;
        cin>>src>>dest;
        addedges(src,dest,false,graph);
    }

    topologicalsortusingkahnalgo(vertices,graph,s);

}