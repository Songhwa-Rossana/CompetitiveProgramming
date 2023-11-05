#include<bits/stdc++.h>
#define ll long long

using namespace std;

const int maxn=1e6+5;

int n,m;
int arr[maxn];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout,tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i =0;i<m;i++)
    {
        int p;
        cin>>p;
        int x=lower_bound(arr,arr+n,p)-arr;
        if(p==arr[x])
        cout<<x+1<<" ";
        else
            cout<<-1<<" ";
    }
    return 0;
}
