#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<long long int> factorials(21, 1);
    for (int i = 1; i <= 20; i++) {
        factorials[i] = factorials[i-1] * i;
    }
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        long long int n;
        cin >> n;

        vector<int> answer;
        for (int j = 20; j >= 0; j--) {
            if (factorials[j] <= n) {
                n -= factorials[j];
                answer.push_back(j);
            }
        }
        cout << "Case " << i << ": ";
        if (n == 0) {
            for (int j = answer.size() - 1; j >= 0; j--) {
                cout << answer[j] << "!";
                if (j > 0) {
                    cout << "+";
                }
            }
            cout << "\n";
        } else {
            cout << "impossible\n";
        }
    }
    return 0;
}
