#include <iostream>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    long long cnt = 0;
    for (long long i = 1; i <= n; i += 2) {
        cnt++;
        if (cnt == k) {
            cout << i << endl;
            return 0;
        }
    }
    for (long long i = 2; i <= n; i += 2) {
        cnt++;
        if (cnt == k) {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}