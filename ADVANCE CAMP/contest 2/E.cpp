#include <bits/stdc++.h>
using namespace std;

const int MAXN = 25;
const int MAXX = 1e5 + 5;

int n, x;
int a[MAXN], dp[MAXN][MAXX];

int solve(int i, int sum) {
    if (i == n) {
        return sum == x;
    }
    if (dp[i][sum + MAXX/2] != -1) {
        return dp[i][sum + MAXX/2];
    }
    int res = 0;
    res |= solve(i+1, sum + a[i]);
    res |= solve(i+1, sum - a[i]);
    return dp[i][sum + MAXX/2] = res;
}

int main() {
    memset(dp, -1, sizeof(dp));
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if (solve(0, 0)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}
