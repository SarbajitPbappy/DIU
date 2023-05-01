#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int xor_sum = 0;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            xor_sum ^= arr[i];
        }
        int missing_num = 0;
        for (int i = 1; i <= n; i++) {
            missing_num ^= i;
        }
        missing_num ^= xor_sum ^ x;
        cout << missing_num << endl;
    }
    return 0;
}
