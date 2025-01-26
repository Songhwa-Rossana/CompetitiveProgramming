#include <iostream>
#include <vector>
using namespace std;

const int MOD = 998244353;

int countBracketSequences(string S) {
    int n = S.length();
    vector<vector<int>> dp(n, vector<int>(n, 0));

    for (int i = 0; i < n; ++i) {
        if (S[i] == '(' || S[i] == ')') {
            dp[i][i] = 1;
        }
    }

    for (int l = 2; l <= n; ++l) {
        for (int i = 0; i < n - l + 1; ++i) {
            int j = i + l - 1;
            if (S[i] == '(' && S[j] == ')') {
                dp[i][j] = dp[i+1][j-1];
            } else if (S[i] == '?' && S[j] == ')') {
                dp[i][j] = (dp[i+1][j-1] + dp[i+1][j]) % MOD;
            } else if (S[i] == '(' && S[j] == '?') {
                dp[i][j] = (dp[i][j-1] + dp[i+1][j]) % MOD;
            } else if (S[i] == '?' && S[j] == '?') {
                dp[i][j] = (dp[i+1][j-1] + dp[i][j-1] + dp[i+1][j]) % MOD;
            }
        }
    }

    return dp[0][n-1];
}

int main() {
    string S;
    cin >> S;
    int result = countBracketSequences(S);
    cout << result << endl;
    return 0;
}
