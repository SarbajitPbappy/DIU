#include <iostream>
#include <string>
#include <vector>

using namespace std;

const int dx[] = {1, 1, -1, -1, 2, 2, -2, -2};
const int dy[] = {2, -2, 2, -2, 1, -1, 1, -1};

int count_attacks(int x, int y) {
    int count = 0;
    for (int i = 0; i < 8; i++) {
        int nx = x + dx[i], ny = y + dy[i];
        if (nx >= 0 && nx < 8 && ny >= 0 && ny < 8) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        string pos;
        cin >> pos;
        int x = pos[0] - 'a', y = pos[1] - '1';
        cout << count_attacks(x, y) << endl;
    }
    return 0;
}
