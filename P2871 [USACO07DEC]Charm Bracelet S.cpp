#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn=1e6+5;

int dp[maxn];
int w[maxn],d[maxn];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>w[i]>>d[i];
    }
    memset(dp,0,sizeof(0));
    for(int i=0;i<n;i++)
    {
        for(int j=m;j>=w[i];j--)
        {
            dp[j]=max(dp[j],dp[j-w[i]]+d[i]);
        }
    }
    cout<<dp[m]<<endl;
    return 0;
}
