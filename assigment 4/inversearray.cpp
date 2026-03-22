#include <iostream>
using namespace std;

void inverseArray(int arr[], int inv[], int i, int n)
{
    if(i == n)
        return;

    inv[arr[i]] = i;

    inverseArray(arr, inv, i+1, n);
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    int inv[n];

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    inverseArray(arr, inv, 0, n);

    for(int i=0;i<n;i++)
    {
        cout << inv[i] << " ";
    }

    return 0;
}