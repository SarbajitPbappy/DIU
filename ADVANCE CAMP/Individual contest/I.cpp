#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

const int MAXN = 1e5 + 5;
int cnt[MAXN][26];

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        string s;
        cin >> n >> s;
        memset(cnt, 0, sizeof(cnt));
        for (int i = 0; i < n; i++) {
            cnt[i % n][s[i] - 'a']++;
        }
        int ans = 0;
        for (int i = 1; i < n; i++) {
            if (n % i != 0) continue;
            bool flag = true;
            for (int j = 0; j < i; j++) {
                int mx = 0;
                for (int k = 0; k < 26; k++) {
                    mx = max(mx, cnt[j][k]);
                }
                if (mx > n / i) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                ans = i;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
