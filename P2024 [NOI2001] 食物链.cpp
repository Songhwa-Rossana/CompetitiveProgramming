#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int maxn=1e5+5;

int n,k;
int p[maxn],X[maxn],Y[maxn];

void init(int n)
{
    for(int i=0;i<n;i++)
    {
        X[i]=n;
        Y[i]=0;
    }
}

int Find(int x)
{
    return X[x]==x?x:Find(X[x]);
}

void merge(int x,int y)
{
    x=Find(x);
    y=Find(y);
    if(x==y)return;

    if(Y[x]<Y[y])
    {
        X[x]=y;
    }else{
    X[y]=x;
    if(Y[x]==Y[y])
        Y[x]++;
    }
}

bool same(int x,int y)
{
    return Find[x]==Find[y];
}

 void solve()
{
  init(n*3);
  int ans=0;
  for(int i=0;i<k;i++)
  {
      int t=p[i];
      int x=X[i]-1;
      int y=Y[i]-1;

      if(x<0||n<=x||y<0||n<=y)
      {
          ans++;
          continue;
      }

      if(t==1){
        if(same(x,y+n)||same(x,y+2*n))
        {
            ans++;
        }
        else
        {
            merge(x,y);
            merge(x+n,y+n);
            merge(x+n*2,y+n*2);
        }
      }
      else{
        if(same(x,y)||same(x,y+2*n))
        {
            ans++;
        }
        else
            {
            merge(x,y+n);
            merge(x+n,y+2*n);
            merge(x+2*n,y);
        }
      }
      cout<<ans<<endl;
  }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>k;
    solve();
    return 0;
}


