#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int maxN=1e5;
ll dp[maxN];

//bool check(dp,n)
//{
//	return 
//}

int main()
{
	ll n,x,sum=0;
	cin>>n>>x;
	cin>>dp[0];
	if(dp[0]>x)
	{
		sum+=dp[0]-x;
		dp[0]=x;   
	}

    for(int i=1;i<n;i++)
	{
		cin>>dp[i];
		if(dp[i]+dp[i-1]>x)
		{
			sum+=dp[i]+dp[i-1]-x;
			dp[i]=x-dp[i-1];
		}
	}
	    cout<<sum;
	return 0;
}
