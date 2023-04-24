#include <iostream>
using namespace std;

int f(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int g(int n) {
    while (n >= 10) {
        n = f(n);
    }
    return n;
}

int main() {
    int n;
    while (cin >> n && n != 0) {
        cout << g(n) << endl;
    }
    return 0;
}
