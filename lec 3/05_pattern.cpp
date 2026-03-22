#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {

        // left spaces
        for(int s = 1; s <= n - i; s++) {
            cout << "  ";
        }

        // left increasing
        for(int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        // right decreasing
        for(int j = i - 1; j >= 1; j--) {
            cout << j << " ";
        }

        cout << endl;
    }
    return 0;
}