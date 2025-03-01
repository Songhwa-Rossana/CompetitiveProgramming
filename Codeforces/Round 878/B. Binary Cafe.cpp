#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    if(log2(n)<k)
    {
        cout<<n+1<<'\n';
    }
    else
    {
        cout<<(int)pow(2,k)<<'\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;

    while (t--) {
    solve();
    }
    return 0;
}
