#include<bits/stdc++.h>
#define dl double
using namespace std;

int main()
{
	dl a,b,c;

	cin>>a>>b>>c;
	dl p=(a+b+c)/2;
	dl s=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("%.1lf",s);

	return 0;
}
