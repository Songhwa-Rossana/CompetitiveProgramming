#include<bits/stdc++.h>
#define ll long long
#define dl double
//#include<cstdio>
//#include<algorithm>
//#include<stack>
//#include<vector>
//#include<queue>
//#include<iostream>
//#include<string>
using namespace std;
const int maxN=1e5;
const int minN=-1e5;
template<typename T,int t>
T max(T arr[t])
{
	T temp=arr[0];
	for(int i=0;i<t;i++)
	{
		if(temp<arr[i])
		{
			temp=arr[i];
		}
	}
	return temp;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin>>q;
	while(q--)
	{
		int n,t;
		cin>>n>>t;
		int a[n],b[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
		}
		int min=-1,j=-1;
		for(int i=0;i<n;i++)
		{
			if(b[i]>min)
			{
				if(a[i]+i<=t)
				{
					min=b[i];
					j=i+1;
				}
			}
			
		}
		cout<<j<<endl;
	}
	
	
	
	
//		if(a[p]<n)
//		cout<<p<<endl;
//		else
//		cout<<"-1"<<endl;
	
	return 0;
}

