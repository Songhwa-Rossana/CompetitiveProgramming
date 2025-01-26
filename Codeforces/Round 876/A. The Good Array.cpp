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
#define INF 0x3f3f3f
using namespace std;
const int maxn=2020;


void solve()
{
    int n,k;
    cin>>n>>k;
   cout<<(n-2)/k+2<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
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
