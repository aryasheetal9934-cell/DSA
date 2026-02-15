#include <iostream>
#include <cmath>
#include <string>

using namespace std;

bool isArmstrong(long long n) {
    string s = to_string(n);
    int digits = s.length();
    long long sum = 0;
    long long temp = n;
    
    while (temp > 0) {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }
    
    return sum == n;
}

int main() {
    long long n;
    if (cin >> n) {
        if (isArmstrong(n)) cout << "true" << endl;
        else cout << "false" << endl;
    }
    return 0;
}