#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define fi first
#define se second
#define mod 1000000007
#define inf 1000000000
#define N 200005

int t,n,k,a[N];
ll ans;

int main(){
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=1;i<=n;i++) cin>>a[i];
        sort(a+1,a+n+1);
        int l=1,r=n;
        while(k--){
            if(l==r) ans+=a[l++];
            else if(a[l]+a[l+1]<a[r]) ans+=a[l++]+a[l++];
            else ans+=a[r--];
        }
        cout<<ans<<endl;
        ans=0;
    }
    return 0;
}

