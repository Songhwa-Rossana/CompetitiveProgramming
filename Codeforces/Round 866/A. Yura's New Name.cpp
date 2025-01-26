#include<bits/stdc++.h>
using namespace std;

int main()
{
	 int n;
	 cin>>n;
	 while(n--)
{
	string s;
	cin>>s;
	if(s=="^")
	{
	cout<<1<<endl;
	continue;	
	}
	int ans=0;
	if(s[0]=='_')
	{
		ans++;
	}
	if(s.back()=='_')
	{
		ans++;
	}
	for(int i=0;i<(int)s.length();i++)
	{
		if(s[i]=='_'&&s[i+1]=='_')
		{
			++ans;
		}
	}
	cout<<ans<<endl;
}
	
	
	
	return 0;
}
