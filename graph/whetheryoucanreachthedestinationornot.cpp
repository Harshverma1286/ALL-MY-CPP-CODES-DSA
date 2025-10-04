#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

pair<int,int> moveNext(int x, int y, char dir) {
    if(dir == 'R') return {x, y+1};
    if(dir == 'L') return {x, y-1};
    if(dir == 'U') return {x-1, y};
    if(dir == 'D') return {x+1, y};
    return {x,y};
}

int main() {
    vector<vector<char>> grid = {
        {'R','R','D','R'},
        {'D','L','D','L'},
        {'U','D','L','D'},
        {'U','R','R','R'}
    };

    int m = grid.size();
    int n = grid[0].size();

    int si = 0, sj = 0;
    int fi = 0, fj = 0;

    while(true) {
        auto p = moveNext(si, sj, grid[si][sj]);
        si = p.first; sj = p.second;

        for(int step=0; step<2; step++) {
            auto p = moveNext(fi, fj, grid[fi][fj]);
            fi = p.first; fj = p.second;
        }

        if(si < 0 || sj < 0 || si >= m || sj >= n ||
           fi < 0 || fj < 0 || fi >= m || fj >= n) {
            cout << "You can't reach destination (out of bounds)\n";
            break;
        }

        if((si == m-1 && sj == n-1) || (fi == m-1 && fj == n-1)) {
            cout << "You have reached your destination successfully\n";
            break;
        }

        if(si == fi && sj == fj) {
            cout << "Cycle detected in path\n";
            break;
        }
    }
}
