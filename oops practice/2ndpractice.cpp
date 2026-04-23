#include<iostream>
using namespace std;

class player{
    private:
    int score;
    int health;
    bool alive;

    public:
    int getscore(){
        return score;
    }

    int gethealth(){
        return health;
    }

    bool isalive(){
        return alive;
    }

    void setscore(int score){
        this->score = score;
    }

    void sethealth(int health){
        this->health = health;
    }

    void setisalive(bool isalive){
        this->alive = isalive;
    }
};

player getmaxscore(player a, player b){
    if(a.getscore()>b.getscore()) return a;
    else return b;
}

int main(){
    player harsh;

    harsh.setscore(200);
    harsh.sethealth(400);
    harsh.setisalive(true);

    player anvi;

    anvi.sethealth(500);
    anvi.setscore(400);
    anvi.setisalive(true);

    cout<<anvi.getscore()<<endl;

    player tanvi = getmaxscore(harsh,anvi);

    cout<<tanvi.getscore();





}