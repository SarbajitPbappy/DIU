#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        int n;
        cin >> n;
        vector<pair<string, int>> chocolates;
        for (int j = 0; j < n; j++) {
            string name;
            int l, w, h;
            cin >> name >> l >> w >> h;
            chocolates.push_back(make_pair(name, l * w * h));
        }
        sort(chocolates.begin(), chocolates.end(), [](pair<string, int> a, pair<string, int> b) {
            return a.second < b.second;
        });
        string victim = chocolates[0].first;
        string thief = chocolates.back().first;
        if (chocolates[0].second == chocolates.back().second) {
            cout << "Case " << i << ": no thief\n";
            continue;
        }
        else if (chocolates[0].second != chocolates[n-2].second) {
            victim = chocolates[0].first;
        }
        cout << "Case " << i << ": " << thief << " took chocolate from " << victim << "\n";
    }
    return 0;
}
