#include<iostream>
#include<string>
using namespace std;

class player{
    private:
    int health;
    int score;
    string name;

    public:

    void setscore(int s){
        score = s;
    }

    void sethealth(int h){
        health = h;
    }

    int showscore(){
        return score;
    }

    int showhealth(){
        return health;
    }



    
};

int main(){

    player harsh;

    harsh.setscore(100);
    harsh.sethealth(200);

    cout<<harsh.showhealth()<<endl;
    cout<<harsh.showscore()<<endl;


}