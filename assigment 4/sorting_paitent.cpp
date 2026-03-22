// #include <iostream>
// #include<algorithm>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     sort(arr,arr+n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" "<<endl;
//     }
//     cout<<endl;
//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int product=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
    int product[0]= arr[i]*arr[i]*arr[i];
    }
    return 0;
}