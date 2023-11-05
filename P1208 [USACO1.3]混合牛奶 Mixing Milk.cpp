#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int maxN=1e5;
struct cow{
	int x;
	int y;
}dp[maxN];

bool cmp(cow a,cow b)
{
	return a.x<b.x;	
}

int main()
{
	int n,m;
	ll sum=0,ans=0;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		cin>>dp[i].x>>dp[i].y;
	}
	sort(dp,dp+m,cmp);
	
	for(int i=0;i<m;i++)
	{
		if(dp[i].y+ans<=n)
		{
			ans+=dp[i].y;
			sum+=dp[i].y*dp[i].x;
		}
		else{
			sum+=(n-ans)*dp[i].x;
			break;
		}
	}
	cout<<sum;
	return 0;
}
