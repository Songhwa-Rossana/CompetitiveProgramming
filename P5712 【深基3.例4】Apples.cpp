#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int maxn=2e6+5;
int n;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    if(n<=1)
        cout<<"Today, I ate"<<" "<<n<<" "<<"apple."<<endl;
    else
        cout<<"Today, I ate"<<" "<<n<<" "<<"apples."<<endl;
    return 0;
}
