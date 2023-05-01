#include <iostream>
#include <algorithm>

using namespace std;

const int N = 2e5 + 5;

int a[N], b[N];

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int mx = 0;
        for (int i = 0; i < n; i++) {
            int freq = count(a, a + n, a[i]);
            if (freq > mx) {
                mx = freq;
            }
        }
        if (n % mx == 0) {
            cout << n - mx << endl;
        } else {
            int cnt = 0;
            for (int i = 0; i < n; i++) {
                if (count(a, a + n, a[i]) != mx) {
                    b[cnt++] = a[i];
                }
            }
            int new_n = cnt;
            int new_mx = 0;
            for (int i = 0; i < new_n; i++) {
                int freq = count(b, b + new_n, b[i]);
                if (freq > new_mx) {
                    new_mx = freq;
                }
            }
            cout << n - new_mx << endl;
        }
    }
    return 0;
}
