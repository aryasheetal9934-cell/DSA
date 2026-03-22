#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int stars = (n / 2) + 1;
    int spaces = -1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= stars; j++) cout << "*\t";
        for (int j = 1; j <= spaces; j++) cout << "\t";
        for (int j = 1; j <= stars; j++) {
            if (i == 1 || i == n) {
                if (j < stars) cout << "*\t";
            } else {
                cout << "*\t";
            }
        }
        cout << endl;

        if (i <= n / 2) {
            stars--;
            spaces += 2;
        } else {
            stars++;
            spaces -= 2;
        }
    }
    return 0;
}