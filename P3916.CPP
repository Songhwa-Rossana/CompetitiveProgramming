#include<bits/stdc++.h>
using namespace std;

const int maxn = 1e5 + 5;

int n,m;
vector<int>e[maxn];
int vis[maxn];


void dfs(int x, int y){
    if(vis[x]) return;
    vis[x] = y;
    for(int i=0; i<e[x].size(); i++)
    dfs(e[x][i], y);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int u,v;
    cin>>n>>m;
    for(int i=1; i<=m; i++){
        cin>>u>>v;
        e[v].push_back(u);
    }
    for(int i=n;i;i--) dfs(i,i);
    for(int i=1;i<=n;i++) cout<<vis[i]<<' ';
    cout<<'\n';
    return 0;
}