#include <iostream>
#include<algorithm>
using namespace std;
bool containduplicate(int arr[],int n){
    sort(arr,arr+n);
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]){
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<containduplicate(arr,n);
    return 0;
}