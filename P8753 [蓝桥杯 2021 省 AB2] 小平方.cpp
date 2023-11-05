#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ll n,v=1,c,ans=0;
	cin>>n;
	for(int i=1;i<n;i++,v++)
	{
		c=(v*v)%n;
		if(c<n/2.0)
		ans++;
		
	}
	
	cout<<ans<<endl;
	
	
	
	return 0;
}
