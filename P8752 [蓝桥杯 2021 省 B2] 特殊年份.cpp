#include<bits/stdc++.h>
using namespace std;


int ans=0;
int main()
{

	for(int i=0;i<5;i++)
	{
		char a,b,c,d;
		cin>>a>>b>>c>>d;
		if(a==c&&d-b==1){
			ans++;
		}
		
		}	
	
	printf("%d",ans);
	
	
	return 0;
}
