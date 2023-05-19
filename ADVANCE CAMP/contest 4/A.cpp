#include <iostream>
#include <vector>

using namespace std;

vector<bool> primes;

bool isPrime(int num) {
    if (num < 2)
        return false;
    if (num == 2)
        return true;
    if (num % 2 == 0)
        return false;
    return primes[num] == false;
}

void sieve(int num) {
    primes.assign(num + 1, false);
    for (int i = 3; i * i <= num; i += 2) {
        if (primes[i] == false) {
            for (int j = i * i; j <= num; j += 2 * i) {
                primes[j] = true;
            }
        }
    }
}

int main() {
    int k;
    cin >> k;

    sieve(15000);

    while (k--) {
        int n;
        cin >> n;

        int count = 0;
        int prime = 0;
        for (int i = 2; count < n; ++i) {
            if (isPrime(i)) {
                prime = i;
                ++count;
            }
        }

        cout << prime << endl;
    }

    return 0;
}
