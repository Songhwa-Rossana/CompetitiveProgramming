#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn=2e6+5;
ll arr[maxn];
ll n,c;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  cin>>n>>c;
  ll cnt=0;
  for(int i=1;i<=n;i++)
  {
      cin>>arr[i];
  }
  sort(arr+1,arr+1+n);
  for(int i=1;i<=n;i++)
  {
      cnt+=((upper_bound(arr+1,arr+1+n,arr[i]+c)-arr)-(lower_bound(arr+1,arr+1+n,arr[i]+c)-arr));
  }
  cout<<cnt<<endl;
  return 0;
}
