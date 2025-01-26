#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll x, ans = 0;
    cin>>x;
    for(int i = 0; i<10; i++){
        for(int j = 0; j<10; j++){
            if(i*j != x){
                ans += i*j;
            }
        }
    }

    cout<<ans<<endl;
}

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    solve ();
    return 0;
}