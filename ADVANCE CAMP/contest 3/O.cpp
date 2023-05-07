#include <iostream>
#include <string>
#include <queue>
#include <stack>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string cmd;
        cin >> n >> cmd;

        queue<int> q;
        stack<int> s;
        bool isFifo = (cmd == "FIFO");

        for (int i = 0; i < n; i++) {
            string op;
            cin >> op;
            if (op == "IN") {
                int m;
                cin >> m;
                if (isFifo) {
                    q.push(m);
                } else {
                    s.push(m);
                }
            } else {
                if (isFifo) {
                    if (!q.empty()) {
                        cout << q.front() << endl;
                        q.pop();
                    } else {
                        cout << "None" << endl;
                    }
                } else {
                    if (!s.empty()) {
                        cout << s.top() << endl;
                        s.pop();
                    } else {
                        cout << "None" << endl;
                    }
                }
            }
        }
    }
    return 0;
}
