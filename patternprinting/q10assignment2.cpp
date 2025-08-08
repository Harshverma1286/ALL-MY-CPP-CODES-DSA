#include <iostream>
using namespace std;

void printPattern(int n) {
    // Upper part of the pattern
    for (int i = 1; i <= n; i++) {
        // Print left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Print spaces
        for (int j = 1; j <= (2 * (n - i)); j++) {
            cout << " ";
        }
        // Print right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Middle part of the pattern
    for (int i = 1; i <= 2; i++) {
        for (int j = 1; j <= (2 * n); j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower part of the pattern
    for (int i = n; i >= 1; i--) {
        // Print left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Print spaces
        for (int j = 1; j <= (2 * (n - i)); j++) {
            cout << " ";
        }
        // Print right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n = 4; // Example input
    printPattern(n);
    return 0;
}
