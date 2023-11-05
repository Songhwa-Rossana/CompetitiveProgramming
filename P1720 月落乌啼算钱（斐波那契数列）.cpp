#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ll a=1,b=1,c=0,f;
	ll n;
	cin>>n;
//	for(int i=3;i<=n;i++)
//	{
//		c=a+b;
//		a=b;
//		b=c;	
//	}

   f=(pow(((1+sqrt(5))/2),n)-pow(((1-sqrt(5))/2),n))/sqrt(5);

	cout<<f<<".00"<<endl;	
	return 0;
}
