#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int m;
    int count0 = 0;

    for(int i = 0; i < n; i++) {
        cin >> m;
        if(m == 0) {
            count0++;
        }
    }
    for(int i = 0; i < count0; i++) {
        cout << "0 ";
    }
    for(int i = count0; i < n; i++) {
        cout << "1 ";
    }

    return 0;
}