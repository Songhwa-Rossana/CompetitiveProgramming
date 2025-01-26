#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll a,b;
    ll sum;
    scanf("%lld %lld", &a, &b);
    sum = pow(a + b, 2);
    printf("%lld\n", sum);
}

int main(){
    solve();
    return 0;
}