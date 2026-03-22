#include <iostream>
using namespace std;

int binaryToDecimal(long long n) {
    int decimal = 0;
    int base = 1;   

    while (n > 0) {
        int lastDigit = n % 10;   
        decimal += lastDigit * base;

        base = base * 2;  
        n = n / 10;       
    }

    return decimal;
}

int main() {
    long long n;
    cin >> n;

    cout << binaryToDecimal(n);

    return 0;
}