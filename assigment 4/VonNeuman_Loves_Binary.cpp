#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while(n--) {
        long long bin;
        cin >> bin;

        int decimal = 0;
        int base = 1;

        while(bin > 0) {
            int lastDigit = bin % 10;
            decimal = decimal + lastDigit * base;
            base = base * 2;
            bin = bin / 10;
        }

        cout << decimal << endl;
    }

    return 0;
}