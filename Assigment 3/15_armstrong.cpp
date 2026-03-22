#include <iostream>
#include <cmath>
using namespace std;

int countDigits(int n) {
    int c = 0;
    while (n > 0) {
        c++;
        n /= 10;
    }
    return c;
}

bool isArmstrong(int n) {
    int digits = countDigits(n);
    int temp = n;
    int sum = 0;

    while (temp > 0) {
        int d = temp % 10;
        sum += pow(d, digits);
        temp /= 10;
    }

    return sum == n;
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    for (int i = n1; i <= n2; i++) {
        if (isArmstrong(i)) {
            cout << i << endl;
        }
    }
    return 0;
}