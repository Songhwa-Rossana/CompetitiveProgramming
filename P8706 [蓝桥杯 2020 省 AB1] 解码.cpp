#include<bits/stdc++.h>
using namespace std;


string s;

int main()
{
    cin>>s;
		
	for(int i=0;i<s.length();i++)
	{
		if(s[i]>='0'&&s[i]<='9')
		{
			int c=s[i]-'0';
			for(int j=1;j<c;j++){
				cout<<s[i-1];
			}
			
		}
		else 
		cout<<s[i];
	}
	
	
	return 0;
}
