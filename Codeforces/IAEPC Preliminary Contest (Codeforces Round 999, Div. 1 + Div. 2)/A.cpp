#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    int odd = 0, even = 0;
    cin>>n;
    vector<int> a(n);

    for(int i = 0; i<n; i++){
        cin>>a[i];
        if(a[i]%2==0) even++;
        else odd++;
    }

    if(even>=1){
        cout<< 1 + odd <<'\n';
    }
    else{
        cout<< odd - 1<<'\n';
    }
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