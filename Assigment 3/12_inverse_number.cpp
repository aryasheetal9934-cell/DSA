#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int position = 1;
    int inverse = 0;

    while (n > 0) {
        int digit = n % 10;
        int place = 1;
        for (int i = 1; i < digit; i++) {
            place = place * 10;
        }
        inverse = inverse + position * place;

        n = n / 10;
        position++;
    }

    cout << inverse;
    return 0;
}