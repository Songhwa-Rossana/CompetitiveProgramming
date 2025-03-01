#include<bits/stdc++.h>
#define ll long long
#define dl double
const int maxn=1e5;
using namespace std;

int f[maxn];
void init()
{
    f[1]=1;
    for(int i=2;i<maxn;i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
}
void solve()
{
    int n,k;
    cin>>n>>k;
    if(k-2<35){cout<<0<<endl; return;}
    int ans=0;

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
