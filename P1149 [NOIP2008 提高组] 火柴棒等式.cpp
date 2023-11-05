#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
	freopen("ans.txt","w",stdout);
	int a[10]={6,2,5,5,4,5,6,3,7,6};
	int i,j,temp=0,num=0,k,in[2020],n;
	in[0]=6;
	for(i=1;i<=2000;i++){
		k=i;
		temp=0;
		while(k){
			temp+=a[k%10];
			k/=10;
		}
		in[i]=temp;
	}
	n=0;
	Again:
	num=0;
	for(i=0;i<=999;i++){
		for(j=0;j<=999;j++){
			if(n==in[i]+in[j]+in[i+j]+4) num++;
		}
	}
	printf("%d,",num);
	if(n<24){n++;goto Again;}
	return 0;
}
