#include<bits/stdc++.h>
#define ll long long
using namespace std;

//const int maxn=2e5;
//ll arr[maxn],dp[maxn];

int main()
{
	int t;
	cin>>t;
	string s;
	
	while(t--)
	{
		ll n,d,k;
		cin>>n>>d;
		cin>>s;
		for(int i=0;i<n;i++)
		{
			if(s[i]<d+'0'){
				k=i;
				break;
			}
			if(i==n-1)
			k=n;
		}
		for(int i=0;i<k;i++)
		cout<<s[i];
		cout<<d;
		for(int i=k;i<n;i++)
		cout<<s[i];
		cout<<endl;
	}
	return 0;
}
