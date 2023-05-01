#include <bits/stdc++.h>
using namespace std;

const int MAXN = 35;

int n, m, k, p, a[MAXN][MAXN], s[MAXN];

bool check() {
    for (int i = 1; i <= n; i++) {
        bool ok = false;
        for (int j = 1; j <= k; j++) {
            int x = a[i][j];
            if ((x > 0 && s[x]) || (x < 0 && !s[-x])) {
                ok = true;
                break;
            }
        }
        if (!ok) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    for (int cas = 1; cas <= t; cas++) {
        cin >> n >> m >> k;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= k; j++) {
                cin >> a[i][j];
            }
        }
        cin >> p;
        memset(s, 0, sizeof(s));
        for (int i = 1; i <= p; i++) {
            int x;
            cin >> x;
            s[x] = true;
        }
        bool ans = check();
        cout << "Case " << cas << ": " << (ans ? "Yes" : "No") << endl;
    }
    return 0;
}
