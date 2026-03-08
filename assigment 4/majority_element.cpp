#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << "\t";
        }

        int val = i;
        // Print increasing then decreasing numbers
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << val << "\t";
            if (j < i) val++;
            else val--;
        }
        cout << endl;
    }
    return 0;
}