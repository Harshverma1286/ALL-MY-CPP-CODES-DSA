#include<iostream>
using namespace std;

class guesser{
    public:
    int g;

    int guessthenumber(){
        int guess;
        cout<<"Guesser kindly guess the number : ";
        cin>>guess;
        g = guess;
        return guess;
    }
};

class players{
    public:
    int player;

    int playersguessthenumber(int pnum){
        int p;
        cout<<"player"<<pnum<<" kindly guess the number : ";
        cin>>p;
        player = p;
        return p;
    }
};

class umpire{
    public:

    int guess;
    int player1;
    int player2;
    int player3;

    void getthenumberoftheguesser(){
        guesser g1;
        guess = g1.guessthenumber();
    }

    void gettheplayersguess(){
        players p1;
        player1 = p1.playersguessthenumber(1);
        players p2;
        player2 = p2.playersguessthenumber(2);
        players p3;
        player3 = p3.playersguessthenumber(3);
    }


    void evaluate(){
        if(guess==player1){
            if(guess==player2){
                if(guess==player3){
                    cout<<"All players have won the game";
                }
                else{
                    cout<<"player1 and player2 have won the game";
                }
            }
            else{
                cout<<"player1 has won the game";
            }
        }
        else if(guess==player2){
            if(guess==player3){
                cout<<"player2 and player3 have won the game";
            }
            else{
                cout<<"player 2 has won the game";
            }
        }
        else if(guess==player3){
            cout<<"player 3 has won the game";
        }
        else{
            cout<<"no one has won the game";
        }
    }
};

int main(){
    umpire u1;
    u1.getthenumberoftheguesser();
    u1.gettheplayersguess();
    u1.evaluate();
}