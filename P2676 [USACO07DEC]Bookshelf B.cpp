#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn = 2e5 + 10;



bool cmp(int x,int y)
{
	return x>y;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	ll n,b;
	cin>>n,b;
	int h[maxn];
	for(int i=0;i<=n;i++)
	{
		cin>>h[i];
	}
	sort(h,h+n,cmp);
	ll ans=0,sum=0;
	while(sum<b)
	{
		sum+=h[ans];
		ans++;
	}
	cout<<ans;
	return 0;
}
