#include<bits/stdc++.h>
using namespace std;

int getKeyPresses(char c) {
    switch (c) {
        case 'a': case 'd': case 'g': case 'j': case 'm':
        case 'p': case 't': case 'w': case ' ': 
            return 1;
        case 'b': case 'e': case 'h': case 'k': case 'n':
        case 'q': case 'u': case 'x':
            return 2;
        case 'c': case 'f': case 'i': case 'l': case 'o':
        case 'r': case 'v': case 'y': 
            return 3;
        case 's': case 'z':
            return 4;
    }
    return 0;
}

int main() {
    int T;
    cin >> T;
    cin.ignore();
    
    for (int i = 1; i <= T; i++) {
        string message;
        getline(cin, message);
        
        int key_press_count = 0;
        for (char c : message) {
            key_press_count += getKeyPresses(c);
        }
        
        cout << "Case #" << i << ": " << key_press_count << endl;
    }
    
    return 0;
}