#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<vector>
#include<queue>
#include<set>
#include<map>
#define pb push_back
#define all(v) ((v).begin,),((v).end())
#define mst(x,val) memset(x,val,sizeof(x))
#define ll long long
#define vi vector<int>
#define INF 0x3f3f3f
using namespace std;
const int maxn=2020;
const int N=1e5+9;

void solve()
{
    int n;
    int a[maxn];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int sum=0,i=0,j=n-1;
    while(i<=j)
    {
        sum+=(a[j]-a[i]);
        j--,i++;
    }
    cout<<sum<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    solve();

    return 0;
}


