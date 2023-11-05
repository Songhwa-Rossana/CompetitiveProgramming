#include<bits/stdc++.h>
#define MAXN 200000005
using namespace std;
int a[MAXN];
int main()
{
	int n;
	
	long long sum=0,cnt=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i]*cnt;
		cnt+=a[i];		
	}
	
	
	cout<<sum;
	return 0;
}
