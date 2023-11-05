#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn=2e6+5;

ll arr[maxn];
map<ll,ll>m;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n,c,ans=0;
    cin>>n>>c;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        m[arr[i]]++;
        arr[i]-=c;
    }
    for(int i=1;i<=n;i++)
    {
        ans+=m[arr[i]];
    }
    cout<<ans<<endl;
    return 0;
}
