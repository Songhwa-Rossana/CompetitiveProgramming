#include<bits/stdc++.h>
#define dl double
#define ll long long
#define nl endl
#define inf 0x3f3f3f3
using namespace std;
const int maxn=1e5+5;
const ll mod=1e9+7;

void solve()
{
   int n;
   cin>>n;
   string s;
   string str="";
   cin>>s;
   char temp=s[0];
   str+=s[0];
   for(int i=1;i<n-1;i++)
   {
    if(s[i]==temp)
    {
        i++;
        temp=s[i];
        str+=temp;
    }
   }
   cout<<str<<'\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t --)
    {
        solve();
    }
return 0;
}
