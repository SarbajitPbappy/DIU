#include <iostream>
using namespace std;

void printSpaces(int n) {
    if (n == 0) {
        return;
    }
    cout << " ";
    printSpaces(n-1);
}

void printStars(int n) {
    if (n == 0) {
        return;
    }
    cout << "*";
    printStars(n-1);
}

void printPyramid(int n, int row) {
    if (row == n) {
        return;
    }
    printSpaces(n-row-1);
    printStars(2*row+1);
    cout << endl;
    printPyramid(n, row+1);
}

int main() {
    int n;
    cin >> n;
    printPyramid(n, 0);
    return 0;
}
