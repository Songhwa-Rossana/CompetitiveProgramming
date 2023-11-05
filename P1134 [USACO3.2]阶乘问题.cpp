#include<bits/stdc++.h>
#define ll long long

using namespace std;
const int maxN=1e7;
int main()
{
	int i;
	ll sum=1;
	cin>>i;
	for(int n=1;n<=i;n++)
	{
		sum*=n;
		while(sum%10==0)
		sum/=10;
		sum=sum%maxN;
	}
	
	cout<<sum%10;
	
	return 0;
}
