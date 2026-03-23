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

// #include <iostream>
// using namespace std;
// void  movezeroes(int arr[],int n){
//     int j=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]!=0){
//             swap(arr[i],arr[j]);
//             j++;
            
//         }
//     }
  
// }

// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     movezeroes(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }

// #include <iostream>
// #include<algorithm>
// #include<climits>
// using namespace std;
// void maxprofit(int price[],int n){
//     int bestbuy[1000];
//     bestbuy[0]=INT_MAX;
//     for(int i=1;i<n;i++){
//         bestbuy[i]=min(bestbuy[i-1],price[i-1]);
//     }
//     int maxprofit=0;
//     for(int i=0;i<n;i++){
//         int currprofit=price[i]-bestbuy[i];
//         maxprofit=max(maxprofit,currprofit);
//     }
//         cout<<maxprofit<<endl;
    

// }

// int main() {
//     int n;
//     cin>>n;
//     int price[n];
//     for(int i=0;i<n;i++){
//         cin>>price[i];
    
//     }
//     maxprofit(price,n);

//     return 0;
// }



// #include <iostream>
// #include<algorithm>
// using namespace std;
// bool containsdulpicate(int nums[],int n){
//     sort(nums,nums+n);
//     for(int i=1;i<n;i++){
        
//             if(nums[i]==nums[i-1]){
//                 return true;
//             }
        
//     }
//     return false;
// }

// int main() {
//    
//      cout<<containsdulpicate(nums,n);


    
//     return 0;
// }

// #include <iostream>
// using namespace std;
// void movezeroes(int arr[],int n){
//     int j=0;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[j]!=0){
//                 swap(arr[i],arr[j]);
//             }
//         }
//     }
//     cout<<endl;
// }


// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     movezeroes(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";;
//     }

//     return 0;


// }


// #include <iostream>
// using namespace std;
// int twosum(int arr[],int n, int target){
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]+arr[j]==target){
//                 cout<<i<<j;
//                 return 0;
//             }
          
//         }
//     }
    

// }

// int main() {
//     int n;
//     cin>>n;
//     int target;
//     cin>>target;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     twosum(arr,n ,target);
//     return 0;
// }



// #include <iostream>
// #include<algorithm>
// using namespace std;

// int main() {
//     int arr[]={1,2,3,4,5};
//     int n=5;
//     int st=0,end=n-1;
//     while(st<end){
//         swap(arr[st],arr[end]);
//         st++;
//         end--;
        
        
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
//     return 0;
// }
// #include <iostream>
// #include<algorithm>
// using namespace std;

// int main() {
//     int arr[]={1,2,3,4,5};
//     int n=5;
//     reverse(arr,arr+n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
    
//     return 0;
// }



// #include <iostream>
// #include<algorithm>
// using namespace std;
// void sumtriplate(int arr[],int n,int target){
//     sort(arr,arr+n);
//     for(int i=0;i<n-2;i++){
//         int st=i+1,end=n-1;
//         while(st<end){
//           int sum=(arr[i]+arr[st]+arr[end]);
//               if(sum==target){
//                 cout<<i<<st<<end<<" ";
//                 st++;
//                 end--;
//               }
//               else if(sum<target){
//                 st++;
//               }
//               else{
//                 end--;
//               }
//         }
//     }
//     cout<<endl;

// }

// int main() {
//      int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin >> arr[i];
//     }
//     int target;
//     cin >> target;
//     sumtriplate(arr,n,target);
    
    

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum=sum+arr[i];
//         cout<<sum<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// #include <iostream>
// #include<climits>
// using namespace std;
// void maxsumsubarrm(int arr[],int n){
//     int maxsum=INT_MIN;
//     int currsum=0;
//     for(int i=0;i<n;i++){
//         currsum+=arr[i];
//         maxsum=max(currsum,maxsum);
//         if(currsum<0){
//             currsum=0;
//         }}
//         cout<<maxsum;
    
    
// }
// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     maxsumsubarrm(arr,n);
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int arr[5]={5, 2,8,1,3};
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" "<<endl;
//     }
//     cout<<endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int arr[5]={5, 2,8,1,3};
    int max=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>max){
        max=arr[i];
        }
        cout<<max;
    }
    
    return 0;
}

