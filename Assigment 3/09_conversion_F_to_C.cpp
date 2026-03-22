#include <iostream>
using namespace std;

int main() {
    int minF, maxF, step;
    cin >> minF;
    cin >> maxF;
    cin >> step;

    while (minF <= maxF) {
        int celsius = (5 * (minF - 32)) / 9;
        
        cout << minF << "\t" << celsius << endl;
        
        minF = minF + step;
    }

    return 0;
}