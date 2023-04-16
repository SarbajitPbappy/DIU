#include <iostream>

using namespace std;

typedef long long ll;

int main() {
    ll n, k;
    cin >> n >> k;
    ll num_odd = (n + 1) / 2;
    ll num_even = n / 2;
    if (k <= num_odd) {
        cout << 2 * k - 1 << endl;
    } else {
        k -= num_odd;
        cout << 2 * k << endl;
    }

    return 0;
}