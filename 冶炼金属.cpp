#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,a,b;
    cin >> n;

    int minV = INT_MIN; // 最小值初始化为正无穷大
    int maxV = INT_MAX; // 最大值初始化为负无穷大

   for(int i=0;i<n;i++)
   {
       cin>>a>>b;
       maxV=min(maxV,a/b);
       minV=max(minV,a/(b+1)+1);
   }
    cout<<minV<<' '<<maxV<<endl;
    return 0;
}

