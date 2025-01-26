#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int maxn=1e6+5;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        char sbl='0';
        for(int ll i=0;i<s.size();i++)
        {
            if(s[i]=='?')
            {
                s[i]=sbl;
            }
            else
            {
                sbl=s[i];
            }
        }
        cout<<s<<endl;
    }


    return 0;
}
