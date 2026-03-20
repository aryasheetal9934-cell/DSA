#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n;
        cin >> n;

        int arr[10005];

        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int m;
        cin >> m;

        sort(arr, arr + n);

        int i = 0;
        int j = n - 1;

        int a = 0, b = 0;

        while(i < j) {

            int sum = arr[i] + arr[j];

            if(sum == m) {
                a = arr[i];
                b = arr[j];
                i++;
                j--;
            }
            else if(sum < m) {
                i++;
            }
            else {
                j--;
            }
        }

        cout << a << b << endl;
        cout << endl;
    }

    return 0;
}

