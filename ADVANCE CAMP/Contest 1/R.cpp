#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> soldier(n);
    for (int i = 0; i < n; i++) {
        cin >> soldier[i];
    }

    int min_diff = abs(soldier[n-1] - soldier[0]);
    int idx_i = n-1, idx_j = 0;

    for (int i = 0; i < n-1; i++) {
        int diff = abs(soldier[i] - soldier[i+1]);
        if (diff < min_diff) {
            min_diff = diff;
            idx_i = i;
            idx_j = i+1;
        }
    }
    int diff = abs(soldier[n-1] - soldier[0]);
    if (diff < min_diff) {
        min_diff = diff;
        idx_i = n-1;
        idx_j = 0;
    }

    cout << idx_i+1 << " " << idx_j+1 << endl;
    return 0;
}