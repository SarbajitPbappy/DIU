#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100005;

int a[MAXN], b[MAXN], prefA[MAXN], prefB[MAXN];

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }
        prefA[0] = a[0];
        for (int i = 1; i < n; i++) {
            prefA[i] = prefA[i-1] + a[i];
        }
        prefB[0] = b[0];
        for (int i = 1; i < m; i++) {
            prefB[i] = prefB[i-1] + b[i];
        }
        int ans = 0;
        if (n < m) {
            swap(n, m);
            swap(prefA, prefB);
            swap(a, b);
        }
        int iStart = max(0, k - m + 1);
        int iEnd = min(k, n - 1);
        int jStart = k - iEnd;
        int jEnd = min(m - 1, k);
        for (int j = jStart; j <= jEnd; j++) {
            int i = k - j;
            int sum = prefA[i] * prefB[j];
            if (j > 0) {
                sum -= prefA[i] * prefB[j-1];
            }
            if (i > 0) {
                sum -= prefA[i-1] * prefB[j];
            }
            if (i > 0 && j > 0) {
                sum += prefA[i-1] * prefB[j-1];
            }
            ans += sum;
        }
        cout << ans << "\n";
    }
    return 0;
}
