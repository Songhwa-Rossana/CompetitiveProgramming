#include<bits/stdc++.h>
#define ll long long
#define vt vector

using namespace std;

void solve(){
    ll n, x, k;
    string s;

    cin>>n>>x>>k;
    cin>>s;

    for(int i = 0; i < n; i++){
        x += (s[i] == 'L' ? -1 : 1);
        k--;
        if(!x) break;
    }
    
    ll ans = 0;
    if(!x){
        ans = 1;
        for(int i = 0; i < n; i++){
            x += (s[i] == 'L' ? -1 : 1);
            if(!x){
                ans += k / (i + 1);
                break;
            }
        }
    }
    
    cout<<ans<<'\n';

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