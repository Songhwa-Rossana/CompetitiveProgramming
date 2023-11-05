#include<bits/stdc++.h>
#define dl double
#define ll long long
#define inf 0x3f3f3f3
using namespace std;
const int maxn=1e5+5;
const ll mod=1e9+7;
int num;
void deal(int n)
{
    for(int i=1;i<=n/2;i++)
    {
        num++;
        deal(i);
    }

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout<<"a[1001]={";
    for(int i=1;i<=1000;i++)
        {
            num=1;
            deal(i);
            if(i!=1000) cout<<num<<',';
            else cout<<num<<"};";
        }
return 0;
}

