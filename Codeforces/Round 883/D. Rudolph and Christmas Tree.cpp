//#include<iostream>
//#include<cstdlib>
//#include<cstdio>
//#include<cstring>
//#include<cmath>
//#include<algorithm>
//#include<vector>
//#include<queue>
//#include<set>
//#include<map>
//#define pb push_back
//#define all(v) ((v).begin,),((v).end())
//#define mst(x,val) memset(x,val,sizeof(x))
//#define ll long long
//#define dl double
//#define vi vector<int>
//#define INF 0x3f3f3f
//using namespace std;
//const int maxn=2020;
//const int N=1e5+9;
//
//void solve()
//{
//    int n,d,h;
//    cin>>n>>d>>h;
//    vector<int>y(n);
//    for(int i=1;i<=n;i++)cin>>y[i];
//        dl ch=h;
//        dl maxd=0.0;
//        for(int i=1;i<=n;i++)
//        {
//            dl dif=(dl)(y[i]-y[i-1])/(dl) d;
//            ch+=dif;
//            if(ch<0.0)
//            {
//                ch=0.0;
//                maxd=max(maxd,ch);
//            }
//        }
//        dl fh=maxd*(dl) d;
//        cout<<fh<<endl;
//}
//
//int main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(0);
//    cout.tie(0);
//    int t;
//    cin>>t;
//    while(t--)
//    solve();
//
//    return 0;
//}
//
//



#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

double calculateTotalArea(int n, int d, int h, std::vector<int>& heights) {
    double totalArea = 0;
    for (int i = 0; i < n; i++) {
        double baseHeight = (i > 0) ? (heights[i] - heights[i-1]) : heights[i];
        double area = (d * baseHeight) / 2.0;
        totalArea += area;
    }
    return totalArea;
}

int main() {
    int t;
    std::cin >> t;

    std::cout << std::fixed << std::setprecision(10); // Set output precision to 10 decimal places

    for (int i = 0; i < t; i++) {
        int n, d, h;
        std::cin >> n >> d >> h;

        std::vector<int> heights(n);
        for (int j = 0; j < n; j++) {
            std::cin >> heights[j];
        }

        double totalArea = calculateTotalArea(n, d, h, heights);
        std::cout << totalArea << std::endl;
    }

    return 0;
}




