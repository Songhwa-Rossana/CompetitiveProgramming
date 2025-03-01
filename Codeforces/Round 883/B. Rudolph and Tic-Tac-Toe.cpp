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
    string a1,a2,a3;
    cin>>a1>>a2>>a3; char c='.';
    for(int i=0;i<3;i++)
    {
        if(a1[i]==a3[i]&&a1[i]==a2[i])
        {
            c=a1[i];
        }
    }

        if(a1[0]==a1[1]&&a1[0]==a1[2])
        {
            c=a1[0];
        }
        if(a2[0]==a2[1]&&a2[0]==a2[2])
        {
            c=a2[0];
        }
        if(a3[0]==a3[1]&&a3[0]==a3[2])
        {
            c=a3[0];
        }
        if(a1[0]==a2[1]&&a1[0]==a3[2])
        {
            c=a1[0];
        }
        if(a3[0]==a2[1]&&a3[0]==a1[2])
        {
            c=a3[0];
        }
        if(c=='.')
        {
            cout<<"DRAW"<<endl;
        }
        else
        {
            cout<<c<<endl;
        }

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


