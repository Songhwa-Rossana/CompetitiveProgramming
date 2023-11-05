//#include<bits/stdc++.h>
//#define ll long long
//#define dl double
//using namespace std;
//
//
//const int maxN=1e5;
//int a[maxN],b[maxN];
//dl  sum,avg;
//int main()
//{
//	int n;
//	cin>>n;
//	for(int i=0;i<n;i++)
//	{
//		cin>>a[i];
//		b[i]=i;
//	}
//	for(int i=0;i<n;i++)
//	{
//		for(int j=i;j<n;j++)
//		{
//			if(a[i]>a[j])
//			{
//				swap(a[i],a[j]);
//				swap(b[i],b[j]);
//			}
//		}
//	}
//	
//	for(int i=0;i<n;i++)
//    {
//    	
//    	sum+=a[i]*(n-i-1);
//	}
//	
//	
//for(int i=0;i<n;i++)
//{
//	cout<<b[i]+1<<" ";
//}
//	
//	cout<<endl;
//avg=sum/n;
//	printf("%0.2lf",avg);
//
//	
//	
//	
//	
//	
//	return 0;
//}


#include<bits/stdc++.h>
#define dl double
using namespace std;

const int maxN=1001;
int a[maxN],b[maxN];
dl avg,sum;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		b[i]=i;
	}
	
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			if(a[i]>a[j]){
			swap(a[i],a[j]);
			swap(b[i],b[j]);
			}

		}
	}
	
	for(int i=1;i<=n;i++)
	{
		sum+=a[i]*(n-i);
	}
	avg=sum/n;
	for(int i=1;i<=n;i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<endl;
	printf("%.2lf",avg);
	return 0;
}

