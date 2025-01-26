#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	int t;
	while(t--)
	{
		ll n;
		cin>>n;
		int dp1[n-1],dp2[n];
		for(int i=0;i<n-1;i++)
		{
			cin>>dp1[i];
		}
		for(int i=0;i<n-1;i++)
		{
			dp2[i]=max(dp1[i],dp1[i+1]);
		}
		
		
		
		
	}
	
	
	
	
	
	return 0;
}
