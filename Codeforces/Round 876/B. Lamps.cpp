#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<vector>
#include<queue>
#include<set>
#include<map>
#define pb push_back
#define all(v) ((v).begin,),((v).end())
#define mst(x,val) memset(x,val,sizeof(x))
#define ll long long
#define vi vector<int>
#define INF 0x3f3f3f
using namespace std;
const int maxn=2020;
const int N=1e5+9;

void solve()
{
    int x,y,n;
    ll pt=0;
    cin>>n;
    vector<int>v[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        v[x].pb(y);
    }

    for(int i=0;i<n;i++)
    {
        sort(v[i].begin(),v[i].end(),greater<ll>());
        for(int j=0;j<min((int)v[i].size(),i);j++)
        {
            pt+=v[i][j];
        }
    }
    cout<<pt<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    solve();

    return 0;
}
