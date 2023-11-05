#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int maxn = 1e5 + 5;

int n, m;
set<int>e[maxn];
bool vis [maxn];

void init(){
    for(scanf("%d%d", &n, &m); m; m--){
            int u = 0, v = 0;
        scanf("%d%d", &u, &v);
    e[u].insert(v);
    }   
}

void dfs(int x = 1){
    if(vis[x] == 1) return; vis[x] = 1;   
    printf("%d ",x);
    for(int v: e[x]) dfs(v);
}

void bfs(){
    queue<int>q;
    q.push(1);
    while(!q.empty()){
        int x = q.front();
        q.pop();
        if(vis[x]) continue;
        vis[x] = 1;
        printf("%d ", x);
        for(int x:e[x]) q.push(x);
    }
}

int main(){
    init();
    dfs();
    memset(vis,0,sizeof(vis));
    putchar('\n');
    bfs();
    return 0;
}