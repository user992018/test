#include <bits/stdc++.h>
using namespace std;

const int N = 1111;

vector <bool> vis(N);
vector <int> g[N];

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    int x, y;
    for(int i = 1; i <= m; i++) {
        scanf("%d %d", &x, &y);
        G[x].push_back(y);
        G[y].push_back()x;
    }
    
    queue <int> Q;
    vis[1] = 1;
    Q.push(1);
    
    while(!Q.empty()) {
        int x = Q.front();
        Q.pop();
        
        for(int y: G[x]) {
            if(!vis[y]) {
                vis[y] = 1;
                Q.push(y);
            }
        }
    }
    
    bool connected = 1;
    for(int i = 1; i <= n; i++) {
        connected &= vis[i];
    }
    
    puts(connected ? "connected" : "not connected");
    
    return 0;
}
