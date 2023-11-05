#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m,n;
	cin>>m>>n;
	int sqr=0,rec=0;
	for(int i=0;i<m;i++)
	{
			for(int j=0;j<n;j++)
		{
			if(i==j)
				sqr+=(m-i)*(n-j);
			else rec+=(m-i)*(n-j);
		}
	}
	cout<<sqr<<" "<<rec;
	return 0;
}
