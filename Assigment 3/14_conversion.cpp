#include <iostream>
using namespace std;

int toDecimal(int n, int base) {
    int decimal = 0;
    int power = 1;

    while (n > 0) {
        int digit = n % 10;
        decimal += digit * power;
        power *= base;
        n /= 10;
    }
    return decimal;
}

int fromDecimal(int n, int base) {
    int result = 0;
    int power = 1;

    while (n > 0) {
        int digit = n % base;
        result += digit * power;
        power *= 10;
        n /= base;
    }
    return result;
}

int main() {
    int sb, db, sn;
    cin >> sb >> db >> sn;

    int decimal = toDecimal(sn, sb);
    int answer = fromDecimal(decimal, db);

    cout << answer;
    return 0;
}