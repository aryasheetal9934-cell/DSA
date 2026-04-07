// #include <iostream>
// using namespace std;
// int missingNumber(int nums[],int n){
//     int total=n*(n+1)/2;
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=nums[i];
        
//     }
//     return total-sum;
// }

// int main() {
//     int n;
//     cin>>n;
//     int nums[n];
//     for(int i=0;i<n;i++){
//         cin>>nums[i];                                               
//     }
//     cout<<missingNumber(nums,n);
    
//     return 0;
// }



#include <iostream>
using namespace std;
int missingNumber(int nums[],int n){
    int total=n*(n+1)/2;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=nums[i];
    }
    return total-sum;
}

int main() {
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<(missingNumber(nums,n));
    return 0;
}