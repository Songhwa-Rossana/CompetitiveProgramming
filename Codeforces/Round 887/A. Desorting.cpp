#include<bits/stdc++.h>
#define ll long long
#define dl double
#define ar array
const int maxn=1e5;
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    ll ar[n],b[n];
    for(ll i=0;i<n;i++)
    {
        cin>>ar[i];
        b[i]=ar[i];
    }
    sort(b,b+n);
    bool bul=false;
    for(ll i=0;i<n;i++)
    {
    if(ar[i]!=b[i])
    {
        cout<<0<<endl;
        bul=1;
        break;
    }
}
    if(bul==false)
    {
        ll minn=INT_MAX;
        ll cnt;
        for(ll i=0;i<n-1;i++)
        {
            if(ar[i+1]-ar[i]<minn)
            {
                minn=ar[i+1]-ar[i];
                cnt=i;
            }
        }
        ll ans;
        ans=(ar[cnt+1]-ar[cnt])/2+1;
        cout<<ans<<endl;
    }
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
