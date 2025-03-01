#include<bits/stdc++.h>
#define dl double
#define ll long long
#define nl endl
#define inf 0x3f3f3f3
using namespace std;
const int maxn=1e6+5;
const ll mod=1e9+7;

ll arr[maxn];
void solve()
{
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   sort(arr,arr+n);
   if(arr[0]<0){cout<<arr[0]<<nl;return;}
        cout<<arr[n-1]<<nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    solve();
return 0;
}
