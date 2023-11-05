#include<bits/stdc++.h>
#define ll long long

using namespace std;


int a,b,c,d,e,f;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>a>>b>>c>>d;
    int x=a*60+b;
    int y=c*60+d;
    e=(y-x)/60;
    f=(y-x)-(e*60);
    cout<<e<<" "<<f<<endl;
    return 0;
}


