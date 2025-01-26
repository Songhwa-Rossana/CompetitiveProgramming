#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int maxn=1e6+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int n,cnt=1,mx=1;
        cin>>n;
        cin>>s;
        for(int i=1;i<n;i++)
        {
            if(s[i]==s[i-1])
                cnt++;
                else
                {
                    mx=max(cnt,mx);
                    cnt=1;
                }
        }
        mx=max(mx,cnt);
        cout<<mx+1<<endl;
    }
    return 0;
}
