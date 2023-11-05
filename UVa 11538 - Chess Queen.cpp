#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int maxn=2e5+5;

void solve()
{
    ll n,m;
    while(cin>>n>>m){
        if((m+n)==0) break;
        if(n>m) swap(n,m);
        cout<<n*m*(n+m-2)+2*n*(n-1)*(3*m-n-1)/3<<endl;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}