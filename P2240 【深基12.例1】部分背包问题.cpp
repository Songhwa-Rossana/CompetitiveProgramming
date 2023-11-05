#include<bits/stdc++.h>
#define ll long long 
#define dl double 
using namespace std;

const int maxN=1e5;
struct gold{
	int x;
	int y;
}dp[maxN];

bool cmp(gold a,gold b)
{
 return a.x<b.x;	
}


int main()
{
	int n,t,w=0;;
	dl ans=0; 
	cin>>n>>t;
	for(int i=0;i<t;i++)
	{
		cin>>dp[i].x>>dp[i].y;
	}
	sort(dp,dp+n,cmp);
	int j=0;
	while(j<n)
	{
		if(dp[i].x+w<=t)
		{
			w+=dp[i].x;
			ans+=dp[i].y;
		}
		else
		{
			
		}
		
	}
	
	
	
	return 0;
}
