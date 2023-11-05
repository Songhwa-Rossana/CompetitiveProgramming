#include<bits/stdc++.h>
using namespace std;
const int maxN=1e5;
int dp[maxN];

int main()
{
	int w,n,cnt=0;
	cin>>w;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>dp[i];
	}
	sort(dp,dp+n);
	int j=0,k=n-1;
	while(j<=k)
	{
		if(dp[j]+dp[k]<=w)
		{
			cnt++;
			j++, k--;
		}
		else
		{
			k--;
			cnt++;
		}
		
	}
	
	cout<<cnt;
	return 0;
}
