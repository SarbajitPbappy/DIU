#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        map<int, int> mp;
        int mx=0;
        for (int i = 0; i < n; i++) {
            int x; 
            cin >> x;
            ++mp[x];
            mx = (mx>mp[x])?mx:mp[x];
        }
        int result = 0;
        if (2 * mx > n) {
            result = 2 * mx - n;
        }
        else if(n % 2 == 1) {
            result = 1;
        }
        cout << result << endl;
    }
    return 0;
}
