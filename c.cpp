#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        vector<int> arr(n, 1);
        int sum = n;

        for (int j = 1; j < n; j++) {
            arr[j] = arr[j - 1] * (j + 1);
            sum += arr[j];
        }

        int mod = sum % n;
        if (mod != 0) {
            arr[n - 1] += n - mod;
            sum += n - mod;
        }

        for (int j = 0; j < n; j++) {
            cout << arr[j] << " ";
        }
        cout << endl;
    }

    return 0;
}
