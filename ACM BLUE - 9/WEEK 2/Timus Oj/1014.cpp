#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << 10 << endl;
        return 0;
    } else if (n == 1) {
        cout << 1 << endl;
        return 0;
    }

    string result = "";
    for (int i = 9; i > 1 && n > 1; i--) {
        while (n % i == 0) {
            n /= i;
            result = (char)(i + '0') + result;
        }
    }

    if (n != 1) {
        cout << "-1" << endl;
    } else {
        cout << result << endl;
    }

    return 0;
}