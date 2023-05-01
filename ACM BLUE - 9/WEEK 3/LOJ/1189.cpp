#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, ca = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string bin = bitset<32>(n).to_string();
        next_permutation(bin.begin(), bin.end());
        cout << "Case " << ca++ << ": " << bitset<32>(bin).to_ulong() << endl;
    }
    return 0;
}
