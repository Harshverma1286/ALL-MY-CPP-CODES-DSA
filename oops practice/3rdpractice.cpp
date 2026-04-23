#include<iostream>
#include<string>
#include<vector>
using namespace std;

class cricketers{
    public:
    string name;
    int age;
    int nooftestmatches;
    int average;
};

int main(){

    vector<cricketers> players;

    for(int i=0;i<20;i++){
        cricketers* cricketer = new cricketers;
        cin>>cricketer->name;
        cin>>cricketer->age;
        cin>>cricketer->nooftestmatches;
        cin>>cricketer->average;

        players.push_back(*cricketer);
    }

    for(int i=0;i<20;i++){
        cout<<players[i].name<<" ";
        cout<<players[i].age<<" ";
        cout<<players[i].nooftestmatches<<" ";
        cout<<players[i].average<<" ";
        cout<<endl;
    }


}