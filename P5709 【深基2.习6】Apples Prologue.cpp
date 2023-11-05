#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn=1e6+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int m,t,s;
    cin>>m>>t>>s;
    if(t==0)
    {
        cout<<0<<endl;
        return 0;
    }
    int a=s/t;
    if(s%t!=0) a++;
    if(m-a<0) cout<<0<<endl;
    else cout<<m-a<<endl;
    return 0;
}
