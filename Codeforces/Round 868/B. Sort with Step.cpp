#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        vector<int> pos(n + 1);
        for (int i = 0; i < n; i++) {
            pos[p[i]] = i;
        }
        bool ok = true;
        for (int i = 1; i <= n; i++) {
            if ((pos[i] - pos[i - 1] + k) % k != 0) {
                ok = false;
                break;
            }
        }
        if (ok) {
            cout << 0 << endl;
            continue;
        }
        int cnt = 0;
        for (int i = 1; i <= n; i++) {
            if (pos[i] != i - 1) {
                cnt++;
            }
        }
        if (cnt == 2) {
            cout << 1 << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
