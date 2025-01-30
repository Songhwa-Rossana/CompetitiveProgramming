#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    int n;
    cin>> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    int64_t sum = accumulate(a.begin(), a.end(), int64_t(0));

    while(a.size() > 1){
        vector<ll> b(a.size() - 1);
        for(int i = 0; i < int(a.size()) - 1; i++){
            b[i] = a[i + 1] - a[i]; 
        }
        swap(a, b);
        sum = max(sum, abs(accumulate(a.begin(), a.end(), int64_t(0))));
    }

    cout<<sum<<'\n';
}

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}