#include <iostream>
#include <vector>
#include <tuple>
#include <cstring>
using namespace std;

int manhattan(int x1, int y1, int x2, int y2) {
    return abs(x1 - x2) + abs(y1 - y2);
}

bool bpm(int u, vector<bool>& seen, vector<int>& matchR, vector<vector<int>>& graph) {
    for (int v : graph[u]) {
        if (!seen[v]) {
            seen[v] = true;
            if (matchR[v] == -1 || bpm(matchR[v], seen, matchR, graph)) {
                matchR[v] = u;
                return true;
            }
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    vector<tuple<int, int, int>> races;
    for (int i = 0; i < n; i++) {
        int x, y, day;
        cin >> x >> y >> day;
        races.push_back({x, y, day});
    }
    
    vector<vector<int>> graph(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            int x1 = get<0>(races[i]);
            int y1 = get<1>(races[i]);
            int d1 = get<2>(races[i]);
            int x2 = get<0>(races[j]);
            int y2 = get<1>(races[j]);
            int d2 = get<2>(races[j]);
            if (d2 > d1) {
                int dist = manhattan(x1, y1, x2, y2);
                if (d2 - d1 >= dist) {
                    graph[i].push_back(j);
                }
            }
        }
    }
    
    vector<int> matchR(n, -1);
    int matchCount = 0;
    for (int u = 0; u < n; u++) {
        vector<bool> seen(n, false);
        if (bpm(u, seen, matchR, graph)) {
            matchCount++;
        }
    }
    
    cout << n - matchCount;
    return 0;
}