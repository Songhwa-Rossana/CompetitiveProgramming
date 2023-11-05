#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn=2e6+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    bool a=0,b=0,c=0,d=0;
    int x;
    cin>>x;
    if(x%2==0&&(x<=12&&x>4)) a=1;
    if(x%2==0||(x<=12&&x>4)) b=1;
    if(x%2==0^(x>4&&x<=12))c=1;
    if(x%2!=0&&(x<=4||x>12))d=1;
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    return 0;
}
