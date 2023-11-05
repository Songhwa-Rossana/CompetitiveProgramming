#include<bits/stdc++.h>
#define ll long long
#define dl double
using namespace std;

const int maxn = 2e5+5;

int a[maxn], b[maxn];


void solve()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    sort(a,a+n);
    sort(b,b+n);

}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}