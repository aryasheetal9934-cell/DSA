#include <iostream>
#include <algorithm>
using namespace std;

void sumtriplate(int arr[], int n, int target)
{
    sort(arr, arr+n);

    for(int i=0;i<n-2;i++)
    {
        int start = i+1;
        int end = n-1;

        while(start < end)
        {
            int sum = arr[i] + arr[start] + arr[end];
            if(sum == target)
            {
                cout << arr[i] << ", " << arr[start] << " and " << arr[end] << endl;
                start++;
                end--;
            }
            else if(sum < target)
            {
                start++;
            }
            else
            {
                end--;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    sumtriplate(arr,n,target);
     for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }

    return 0;
}

