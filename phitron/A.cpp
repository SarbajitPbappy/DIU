#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        for (int j = N; j > i; j--) {
            cout << " ";
        } 
        for (int k = 0; k < i * 2 - 1; k++) {
            if (i % 2 == 0) {
                cout << "<";
            } else {
                cout << ">";
            }
        }
        cout << endl;
    }
    for (int i = N - 1; i >= 1; i--) {
        for (int j = N - i; j > 0; j--) {
            cout << " ";
        }
        
        for (int k = i * 2 - 1; k > 0; k--) {
            if (i % 2 == 0) {
                cout << "<";
            } else {
                cout << ">";
            }
        }
        
        cout << endl;
    }
    
    return 0;
}
