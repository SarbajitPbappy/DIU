#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    int t;
    cin >> t;

    unordered_set<long long> cubes;
    for (long long i = 1; i <= 10000; i++) {
        cubes.insert(i * i * i);
    }

    for (int i = 0; i < t; i++) {
        long long x;
        cin >> x;

        bool found = false;
        for (long long a = 1; a * a * a <= x && !found; a++) {
            long long b3 = x - a * a * a;
            if (cubes.count(b3) > 0) {
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
