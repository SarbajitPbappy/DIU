#include <iostream>
using namespace std;

int binaryToDecimal(int n) {
    int num = n;
    int dec_value = 0;
    int base = 1;
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
        dec_value += last_digit * base;
        base = base * 2;
    }
    return dec_value;
}

int main() {
    int a1, a2, b1, b2, c1, c2, d1, d2, i, t;
    char s;
    cin >> t;
    for (i = 1; i <= t; i++) {
        cin >> a1 >> s >> b1 >> s >> c1 >> s >> d1;
        cin >> a2 >> s >> b2 >> s >> c2 >> s >> d2;

        a2 = binaryToDecimal(a2);
        b2 = binaryToDecimal(b2);
        c2 = binaryToDecimal(c2);
        d2 = binaryToDecimal(d2);

        if (a1 == a2 && b1 == b2 && c1 == c2 && d1 == d2) {
            cout << "Case " << i << ": Yes\n";
        } else {
            cout << "Case " << i << ": No\n";
        }
    }
    return 0;
}
