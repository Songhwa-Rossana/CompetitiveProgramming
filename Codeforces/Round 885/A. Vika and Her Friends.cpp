#include<bits/stdc++.h>
#define ll long long
#define dl double
using namespace std;
const int maxn=1e5;

void solve()
{
    int n,m,k;
    int x,y,a,b;
    cin>>n>>m>>k;
    cin>>x>>y;
    string ans="YES\n";
    for(int i=0;i<k;++i)
    {
        int xi,yi;
        cin>>xi>>yi;
        if((xi+yi)%2==(x+y)%2)
        {
            ans="NO\n";
        }
    }
    cout<<ans;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
