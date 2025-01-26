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
    ll n,m,h;
    cin>>n>>m>>h;
    vector<vector<int>>times(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>times[i][j];
        }
    }
    vector<pair<int ,int>>part(n);
    for(int i=0;i<n;i++)
    {
        part[i].first=0;
        part[i].second=i;
    }
    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;i++)
        {
            part[i].first+=times[i][j];
        }
    }
    sort(part.begin(),part.end());
    int rank=n;
    for(int i=0;i<n;i++)
    {
        if(part[i].second==0)
        {
            rank=i+1;
            break;
        }
    }
    cout<<rank<<endl;
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


