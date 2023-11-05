#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int maxn=2e6+5;


 int n,q,p,arr[maxn];
 ll i,j,k;
 map<ll, int>g;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>q;
    while(q--)
    {
        cin>>p>>i>>j;
        if(p==1)
        {
            cin>>k;
            g[i*1e6+j]=k;
        }
        if(p==2)
        {
            cout<<g[i*1e6+j]<<endl;
        }
    }
}
