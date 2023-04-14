#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore(); // ignore the newline character after t
    for (int i = 1; i <= t; i++) {
        string message;
        getline(cin, message);
        int numPresses = 0;
        for (int j = 0; j < message.length(); j++) {
            if (message[j] == ' ') {
                numPresses++; // count space as one press
            }
            else {
                int key = message[j] - 'a';
                int presses = (key % 3) + 1; // calculate number of presses needed
                if (message[j] == 's' || message[j] == 'z') {
                    if (j > 0 && (message[j-1] == 's' || message[j-1] == 'z')) {
                        numPresses += presses - 1; // double press for consecutive s or z
                    }
                    else {
                        numPresses += presses; // single press for s or z
                    }
                }
                else {
                    numPresses += presses; // single press for other letters
                }
            }
        }
        cout << "Case #" << i << ": " << numPresses << endl;
    }
    return 0;
}
