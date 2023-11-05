#include<bits/stdc++.h>

#define ll long long
#define dl double
#define lowbit(y) y&-y 

using namespace std;

const int maxn = 2e5 + 5;

ll a[maxn], b[maxn], f[maxn], q, x, t, i=1;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin>>x;
    for(int i=1; i<=x; i++){
        cin>>a[i];
        b[i] = lowbit(a[i]);
        f[i] = f[i-1] + b[i];
    }

    cin>>q;
    while(q--){
        cin>>t;
        for(; i<=x; i++)
            if(f[i]>=t){
                cout<<a[i]/b[i]<<'\n';
                break;
            }   
    }
    return 0;
}