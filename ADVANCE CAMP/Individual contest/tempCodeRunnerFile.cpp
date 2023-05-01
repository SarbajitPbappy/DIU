#include <iostream>
#include <unordered_set>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        long long x;
        cin >> x;

        bool found = false;
        long long a_limit = cbrt(x);  
        for (long long a = 1; a <= a_limit && !found; a++) {
            long long b3 = x - a * a * a;
            long long b = cbrt(b3); 
            if (b * b * b == b3) {
                found = true;
            }
        }

        if (found) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
