#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    set<int> s;

    for (int i = 0; i < q; i++) {
        int t, x;
        cin >> t >> x;

        if (t == 1) {
            s.insert(x);
        } else if (t == 2) {
            s.erase(x);
        } else {
            if (s.find(x) != s.end()) {
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        }
    }

    return 0;
}
