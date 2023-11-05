#include<bits/stdc++.h>
#define ll long long
using namespace std;

//const int maxN=1e5+5;
//
//int dp[maxN];

int main()
{
   int n,x,l=0;
   cin>>n;
   ll day=0;
   for(int i=0;i<n;i++)
	{
		cin>>x;
		if(x>l)
		{
			day+=x-l;
		}
		l=x;
	}
	cout<<day;
	return 0;
}
