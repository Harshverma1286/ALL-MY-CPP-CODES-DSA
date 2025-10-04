#include<iostream>
#include<vector>
using namespace std;

class linkedlist{
    public:
    int val;
    linkedlist* next;

    linkedlist(int value){
        val = value;
        this->next = NULL;
    }
};

void addedge(int src,int des,bool isbidirectional,vector<linkedlist*>& graph){
    linkedlist* newnode = new linkedlist(des);
    newnode->next = graph[src];
    graph[src] = newnode;

    if(isbidirectional){
        linkedlist* newnode = new linkedlist(src);
        newnode->next = graph[des];
        graph[des] = newnode;
    }
}

void printgraph(vector<linkedlist*> graph){
    for(int i=0;i<graph.size();i++){
        cout<<i<<"->";
        linkedlist* temp = graph[i];
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<endl;
    }
}

int main(){
    int vertices;
    cout<<"enter the number of vertices : ";
    cin>>vertices;

    vector<linkedlist*> graph(vertices,nullptr);

    int edges;
    cin>>edges;

    for(int i=0;i<edges;i++){
        int src;
        int destination;
        bool isbidirectional;
        cout<<"enter the source , destination, biderctional :";
        cin>>src>>destination>>isbidirectional;
        addedge(src,destination,isbidirectional,graph);
    }

    cout<<"the list are : ";
    printgraph(graph);

}