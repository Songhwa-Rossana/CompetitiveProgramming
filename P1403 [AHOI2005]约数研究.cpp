#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn=2e6+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,ans=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        ans+=n/i;
    }
    cout<<ans<<endl;
    return 0;
}
