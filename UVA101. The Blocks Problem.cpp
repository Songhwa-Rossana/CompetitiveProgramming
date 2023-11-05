//#include<bits/stdc++.h>
#include<cstdio>
#include<vector> 
#include<string> 
#include<algorithm>
#include<iostream>
using namespace std;

const int maxn=30;
int n;
vector<int> pile[maxn];

void find_blcok(int&a,int&p,int&h)
{
	for(p=0;p<n;p++)
	for(h=0;h<pile[p].size();h++)
	return ;
}

void clear(int p,int h)
{
	for(int i=h+1;i<pile[p].size();i++)
	{
		int b=pile[p][i];
		pile[b].push_back(b);
	}
pile[p].resize(h+1);
}

void pile_onto(int p,int h,int p2)
{
	for(int i=h;i<pile[p].size();i++)
	{
		pile[p2].push_back(pile[p][i]);
	}
pile[p].resize(h);
}

void print()
{
	for(int i=0;i<n;i++)
	{
	printf("%d: ",i);
	for(int j=0;j<pile[i].size();j++)printf(" %d",pile[i][j]);
	printf("\n");
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
	cin>>n;
	int a,b;
	string s1,s2;
	for(int i=0;i<n;i++)
	pile[i].push_back(i);
	while(cin>>s1>>a>>s2>>b)
	{
		int pa,pb,ha,hb;
		find(a,pa,ha);
		find(b,pb,hb);
		if(pa==pb)
		continue;
		if(s2=="onto")
		clear(pb,hb);
		if(s1=="move")
		clear(pa,ha);
		pile_onto(pa,ha,pb);
	}
	print();
	return 0;
}
