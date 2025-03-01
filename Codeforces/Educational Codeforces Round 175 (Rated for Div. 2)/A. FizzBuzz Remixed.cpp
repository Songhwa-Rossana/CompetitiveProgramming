#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    ll n;
    cin>>n;

    ll count = (n / 15) * 3;
    ll rem = n % 15;
    count += min(rem + 1, 3LL);

    cout<<count<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--) solve();

    return 0;
}