#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int maxn=1e6+5;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t,n=0;
    cin>>t;
    while(t--)
    {
        int x,k;
        cin>>x>>k;
        if(x%k!=0)
        {
            cout<<1<<endl;
            cout<<x<<endl;
        }
       else{
        cout<<2<<endl;
        cout<<x-(k+1)<<" "<<k+1<<endl;
       }

    }
    return 0;
}
