#include<bits/stdc++.h>
using namespace std;
const int maxN=5e3+5;
struct app{
   int x,y;	//x: height y: power
}dp[maxN];

bool cmp(app a,app b)
{
	return a.y<b.y;
}



int main()
{
	int n,s; // n: the number of apples s: power
	cin>>n>>s;
	int a,b; //a: height of the chair b: the longest length
	cin>>a>>b;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>dp[i].x>>dp[i].y;
	}
    sort(dp,dp+n,cmp);
	 
	for(int i=0;i<n;i++)
	{
		if(dp[i].x<=a+b&&dp[i].y<=s)
		{
			sum++;
			s-=dp[i].y;
		}
		if(s<0)
		break;
	}
	
	cout<<sum;
	
	return 0;
}
