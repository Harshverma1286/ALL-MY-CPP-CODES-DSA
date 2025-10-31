#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
#include<queue>
#include<deque>
#include<utility>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<vector<int>> vaishnavi;
    vector<vector<int>> suraj;
    for (int i = 0; i < n; i++) {
        string ch, val, anotherch, anotherval;
        cin >> ch >> val >> anotherch >> anotherval;

        auto getRank = [&](string s) -> int {
            if (s == "A") return 1;
            if (s == "J") return 11;
            if (s == "Q") return 12;
            if (s == "K") return 13;
            return stoi(s);
        };
        int rank1 = getRank(ch);
        int suit1 = stoi(val);
        int rank2 = getRank(anotherch);
        int suit2 = stoi(anotherval);

        vaishnavi.push_back({rank1, suit1});
        suraj.push_back({rank2, suit2});
    }

    vector<int> priority(4);
    for (int i = 0; i < 4; i++){
        cin >> priority[i];
    }

    unordered_map<int,int> mp;
    for(int i=0;i<4;i++){
        mp[priority[i]] = i;
    }

    auto rearrangeCards = [&](vector<vector<int>>& cards) {
        sort(cards.begin(), cards.end(), [&](const vector<int>& a, const vector<int>& b){
            if(a[0] != b[0]){
                return a[0] < b[0];
            }
            else {
                return mp[a[1]] > mp[b[1]];
            }
        });
    };

    rearrangeCards(vaishnavi);
    rearrangeCards(suraj);

    queue<pair<int,int>> vaishnavideck, surajdeck;
    for(size_t i=0;i<vaishnavi.size();i++){
        vaishnavideck.push({vaishnavi[i][0],vaishnavi[i][1]});
    }

    for(size_t i=0;i<suraj.size();i++){
        surajdeck.push({suraj[i][0],suraj[i][1]});
    }

    deque<pair<int,int>> handofcard;
    bool vaishnaviturn = true;
    int turnCount = 0;
    const int MAX_TURNS = 10000;

    while(turnCount < MAX_TURNS){
        turnCount++;       
        if(vaishnaviturn){
            if(vaishnavideck.empty()){
                break;
            }
        } else {
            if(surajdeck.empty()){
                break;
            }
        }

        pair<int,int> currentcard;

        if(vaishnaviturn){
            currentcard = vaishnavideck.front();
            vaishnavideck.pop();
        } else {
            currentcard = surajdeck.front();
            surajdeck.pop();
        }

        handofcard.push_back(currentcard);

        if(handofcard.size() >= 2){
            pair<int,int> topcard = handofcard[handofcard.size()-2];
            
            if(currentcard.first == topcard.first && mp[currentcard.second] < mp[topcard.second]){
                vector<vector<int>> tempHand;
                for(auto &card : handofcard){
                    tempHand.push_back({card.first, card.second});
                }
                
                rearrangeCards(tempHand);
                if(vaishnaviturn){
                    for(auto &card : tempHand){
                        vaishnavideck.push({card[0], card[1]});
                    }
                } else {
                    for(auto &card : tempHand){
                        surajdeck.push({card[0], card[1]});
                    }
                }
                handofcard.clear();
                continue;
            }
        }

        vaishnaviturn = !vaishnaviturn;
    }
    if(vaishnavideck.empty() && surajdeck.empty()){
        cout << "TIE";
    } else if(vaishnavideck.empty()){
        cout << "LOSER";
    } else {
        cout << "WINNER";
    }
}