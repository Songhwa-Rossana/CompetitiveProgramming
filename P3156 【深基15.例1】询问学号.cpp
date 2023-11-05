#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn=2e6+5;

ll n,m;
ll arr[maxn];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    while(m--)
    {
        int t;
        cin>>t;
        cout<<arr[t-1]<<endl;
    }
    return 0;
}
