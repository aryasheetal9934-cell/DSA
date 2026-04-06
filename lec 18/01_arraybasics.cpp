// #include <iostream>
// using namespace std;

// int main() {
//     //CREATE
//     //first wat
//     int arr[5];// by defalut garbage vale hogi aur baad mein hum chnage kr skte hai
//     //second way
//     arr[0]=1;
//     arr[1]=1;
//     arr[2]=1;
//     arr[3]=1;
//     arr[4]=1;
//     arr[5]=1;
//     int arr_b[]={1,2,3,4,5};//phle se intialize hai aur baad me change bhi kar skate
    
//     //third way
//     int n;
//     cin>>n;
//     int arr_c[n];// by default garbage and baad mein chane kr skte

//     //READ
//     int s=sizeof(arr_b)/sizeof(int);
//     for(int i=0;i<s;i++){
//         cout<<arr_b[i]<<" ";
//     }
//     cout<<endl;

//     //UPDATE
//     for(int i=0; i<s;i++){
//         arr[i]+=i;
//     }
//     cout<<endl;
//     for(int i=0;i<s;i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// void printsubarr(int arr[],int n){
//     for(int start=0;start<n;start++){
//         for(int end=start;end<n;end++){
//             for(int i=start;i<=end;i++){
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
//       for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     printsubarr(arr,n);
     
    

//     return 0;
// }

