#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn=2e6+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    char s[14],c;
    cin>>s;
    int i=0,j=0;
    for(int i=0;i<11;i++)
    {
        if(s[i]!='-')
        {
            j++;
            i+=j*(s[i]-'0');
        }
    }
//    cout<<i<<endl;
    i%=11;
    if(i==10)
        c='X';
    else c=i+'0';
    if(c==s[12]) cout<<"Right"<<endl;
    else
    {
        s[12]=c;
        cout<<s;
    }
    return 0;
}
