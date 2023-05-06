#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    unordered_map<int, int> freq;

    for(int i = 0; i < n; i++) {
        cin >> v[i];
        freq[v[i]]++;
    }

    long long ans = 0;
    for(auto it : freq) {
        ans += (long long)(n - it.second) * it.second;
    }

    cout << ans / 2 << endl;

    return 0;
}
