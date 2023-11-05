#include<bits/stdc++.h>
using namespace std;

int dp[100050],x,mx=-1,mn=1e5,ans1,ans2;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		while(cin>>x)
		{
			dp[x]++;
			mn=min(x,mn);
		mx=max(x,mx);
		}
	
	}
	
	for(int i=mn;i<=mx;i++)
	{
		if(dp[i]==0) 
		ans1=i;
		else if(dp[i]==2) 
		ans2=i;
	}
	cout<<ans1<<" "<<ans2;
	return 0;
}
