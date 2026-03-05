#include <iostream>

using namespace std;

void checkCarAllowed() {
    long long carNo;
    cin >> carNo;

    int sumEven = 0;
    int sumOdd = 0;

    if (carNo == 0) {
        sumEven = 0;
    } else {
        while (carNo > 0) {
            int digit = carNo % 10;
            if (digit % 2 == 0) {
                sumEven += digit;
            } else {
                sumOdd += digit;
            }
            carNo /= 10;
        }
    }

    if ((sumEven % 4 == 0 && sumEven != 0) || (sumOdd % 3 == 0 && sumOdd != 0)) {
        cout << "Yes" << endl;
    } else if (sumEven == 0 && sumOdd == 0) {
        cout << "Yes" << endl; 
    } else {
        cout << "No" << endl;
    }
}

int main() {
    int n;
    if (!(cin >> n)) return 0;

    while (n--) {
        checkCarAllowed();
    }

    return 0;
}