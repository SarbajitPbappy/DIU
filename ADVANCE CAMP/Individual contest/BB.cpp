#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<ll> a(n);
        vector<ll> b(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        ll max_sum = 0;

        for (int i = 0; i < n; i++) {
            int flips = 0;
            ll sum = 0;
            vector<ll> c;

            for (int j = 0; j < n; j++) {
                if (j == i || flips == k) {
                    c.push_back(a[j]);
                } else {
                    c.push_back(b[j]);
                    flips++;
                }
            }

            for (int j = 0; j < n; j++) {
                sum += c[j];
            }

            max_sum = max(max_sum, sum);
        }

        cout << max_sum << endl;
    }

    return 0;
}
