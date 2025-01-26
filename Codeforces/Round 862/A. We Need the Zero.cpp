#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn=1000;
int dp[maxn];
int main()
{
	
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll ar[n];
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		ll ans;
		for(int i=0;;i++)
		{
			ans=ar[i]^ar[i+1];
			ans=ans^ar[i+2];
			
		}
		
	
		
       
	printf("%d\n",ans);
}
	
	
	return 0;
}
