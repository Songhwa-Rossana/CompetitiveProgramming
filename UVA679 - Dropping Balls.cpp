#include<bits/stdc++.h>
#define left(x) x * 2 + 1
#define right(x) x * 2 + 2

using namespace std;

    const int maxn=524289;
    const int SIZE=1048575;

    bool tree[SIZE];
    int ans[21][maxn];

//    int p=1<<maxd;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

//        cout<<sizeof(s)<<endl;
//        cout<<p<<endl;

    int i;
    cin>>i;
    while(i--)
    {
        int d,k;
        int cur=1;
        cin>>d>>k;
        for(int i=1;i<d;i++)
        {
            if(k%2)
            {
                k=k/2+1;
                cur*=2;
            }
            else
            {
                k/=2;
                cur=cur*2+1;
            }
        }
        cout<<cur<<endl;
    }
    cin>>i;
    return 0;
}
