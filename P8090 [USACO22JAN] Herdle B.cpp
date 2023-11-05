#include<bits/stdc++.h>
using namespace std;

int main()
{
	char a[3][3],b[3][3];
	int yll=0,grn,cnt1[26],cnt2[26];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
		
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>b[i][j];
		}
		
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(a[i][j]==b[i]	[j]){
				grn++;
			}
			
			else{
				cnt1[a[i][j]-'A'+1]++;
				cnt2[b[i][j]-'A'+1]++;
			}
			
		}
		
	}
	for(int i=0;i<26;i++)
	{
		yll+=min(cnt1[i],cnt2[i]);
	}
	cout<<grn<<endl<<yll;
	return 0;
}
