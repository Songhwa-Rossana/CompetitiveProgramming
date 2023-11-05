#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
   ll a,b,d,n;
       cin>>a>>b>>n;
       d=b-a;
	   cout<<(n*a+((n*(n-1))*d)/2)<<endl;
	return 0;
}
