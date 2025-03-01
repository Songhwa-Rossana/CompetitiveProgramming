#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];

    vector<int> max_left(n), min_right(n);
    max_left[0] = a[0];
    min_right[n-1] = a[n-1];

    for(int i=1; i<n; i++)
        max_left[i] = max(max_left[i-1], a[i]);

    for(int i=n-2; i>=0; i--)
        min_right[i] = min(min_right[i+1], a[i]);

    vector<int> res;
    for(int i=0; i<n; i++)
        if(max_left[i] == min_right[i])
            res.push_back(a[i]);

    cout << res.size()<<' ';
    for(int i=0; i<min(100, (int)res.size()); i++)
        cout << res[i] << " ";
    cout << "\n";

    return 0;
}