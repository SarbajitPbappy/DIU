#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    queue<string> feathers;
    for (int i = 0; i < n; i++) {
        int op;
        cin >> op;
        if (op == 1) {
            string color;
            cin >> color;
            feathers.push(color);
        }
        else {
            string color = feathers.front();
            feathers.pop();
            feathers.push(color);
            cout << color << endl;
        }
    }

    return 0;
}
