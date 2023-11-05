#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i=1,max=0,ans=0,p[20005];

	cin>>n>>m;
    
    for(i=1;i<=m;i++)
    {
    	cin>>p[i];
	}
	sort(p+1,p+1+m);
	for(i=m;i>=1;i--)
	{
		if(p[i]*(m-i+1)>max&&m-i+1<=n)
		max=p[i]*(m-i+1),ans=p[i];;
		
	}
    cout<<ans<<" "<<max;
    return 0;
}