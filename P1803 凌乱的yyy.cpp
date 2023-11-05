//#include<bits/stdc++.h>
//using namespace std;
//
//const int maxN=2e5;
//struct yy{
//	int x; // begin time
//	int y; // end time
//}dp[maxN];
//
//bool cmp(yy a,yy b)
//{
//	return a.y<b.y;
//}
//
//int main()
//{
//	int n,cnt,sum=1;
//	cin>>n;
//	for(int i=0;i<n;i++)
//	{
//		cin>>dp[i].x>>dp[i].y;
//	}
//	sort(dp,dp+n,cmp);
//	cnt=dp[0].y;
//	int j=0;
//	while(j<n)
//	{
//		j++;
//		if(dp[j].x>=cnt){
//			sum++;
//			cnt=dp[j].y;
//		}
//	}
//	
//	cout<<sum;
//	
//	
//	
//	return 0;
//}

#include<bits/stdc++.h>
using namespace std;

const int maxN=2e5;

struct yyy{
	int x;
	int y;
}dp[maxN];

bool cmp(yyy a,yyy b)
{
	return a.y<b.y;
}

int main()
{
	int n,cnt,sum=1;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>dp[i].x>>dp[i].y;
	}
	sort(dp,dp+n,cmp);
	int j=0;
	cnt=dp[0].y;
	while(j<n)
	{
		j++;
		if(dp[j].x>=cnt)
		{
			sum++;
			cnt=dp[j].y;
		}
	}
	cout<<sum;
	return 0;
}




















