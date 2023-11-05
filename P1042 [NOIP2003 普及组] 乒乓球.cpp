#include<bits/stdc++.h>
using namespace std;

const int maxN=1e5;
int w,l;
int p[maxN];
char s;

int main()
{
	
	for(int i=0;cin>>s&&s!='E';i++)
	{
		if(s=='W')p[i]=1;
		if(s=='L')p[i]=-1;
	}
	for(int i=0;1;i++)
	{
		if(p[i]>0) w+=1;
		if(p[i]<0) l+=1;
		if(p[i]==0)
		{
			cout<<w<<":"<<l<<endl<<endl;
			break;
		}
		if((w-l>=2||l-w>=2)&&(w>=11||l>=11))
		{
			cout<<w<<":"<<l<<endl;
			w=0,l=0;
		}
		
		}	
		w=0,l=0;
		for(int i=0;1;i++)
		{
			if(p[i]>0) w+=1;
			if(p[i]<0) l+=1;
			if(p[i]==0) 
			{
				cout<<w<<":"<<l;
				break;
			}
		    if((w-l>=2||l-w>=2)&&(w>=21||l>=21))
		    {
		    	cout<<w<<":"<<l<<endl;
		    	w=0,l=0;
			}
		}
		
		
	
	
	return 0;
}
