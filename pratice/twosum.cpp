// #include <iostream>
// using namespace std;


// int main() {
//     int n;
//     cin>>n;
//     int nums[n];
//     for(int i=0;i<n;i++){
//         cin>>nums[i];
//     }
//     int target;
//     cin>>target;
//     for(int i=0;i<n;i++){
//        for(int j=i+1;j<n;j++){
//         if(nums[i]+nums[j]==target){
//         cout<<i<<" "<<j;
//         return 0;
//        }
//     }
//     } 
//     cout<<-1;
//     return 0; 
    
//     return 0;
// }

// #include <iostream>
// using namespace std;
// void printsubarr(int arr[],int n){
   
//     for(int start=0; start<n;start++){
//         for(int end=start;end<n;end++){
//             for (int i=start;i<=end;i++){
//                 cout<<arr[i];
//             }
//             cout<<",";

//         }
//         cout<<endl;
//     }
// }


// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     printsubarr(arr,n);
//     return 0;
// }


// #include <iostream>
// #include<climits>
// using namespace std;
// void maxsumsubarr(int arr[],int n){
//     int currsum=0;
//     int maxsum=INT_MIN;
//     for(int i=0;i<n;i++){
//         currsum+=arr[i];
//       maxsum=max(currsum,maxsum);
//       if(currsum<0){
//         currsum=0;
//       }
     
//     }
//      cout<<maxsum<<endl;
// }
// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     maxsumsubarr(arr,n);
//     return 0;
// }

#include <iostream>
using namespace std;
void  movezeroes(int arr[],int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
            
        }
    }
  
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    movezeroes(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}