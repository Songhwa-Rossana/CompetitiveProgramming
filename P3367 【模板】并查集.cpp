#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int maxn=1e5+5;
int n,m,z,x,y,fx[maxn];

int Find(int x)
{
    if(fx[x]==x)
        return x;
    else
        return fx[x]=Find(fx[x]);
}

void init()
{
    for(int i=0;i<n;i++)
    {
     fx[i]=i;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>m;
    init();
    for(int i=0;i<m;i++)
    {
        cin>>z>>x>>y;
        if(z==1)
            fx[Find(x)]=Find(y);
        else
        {
            if (Find(x)==Find(y))
            cout<<"Y"<<endl;
            else
            cout<<"N"<<endl;

        }
    }
    return 0;
}




