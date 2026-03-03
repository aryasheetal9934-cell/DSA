#include <iostream>
using namespace std;
void maxsumsubarr(int arr[],int n){
    int maxsum;
    for(int start=0;start<n;start++){
        for(int end=start;end<=n;end++){
            int currsum=0;
            for(int i=start;i<=end;i++){
                currsum+=arr[i];
            }
            cout<<currsum<<",";
            maxsum=max(maxsum,currsum);
        }
        cout<<endl;
    }
    cout<<maxsum<<endl;
}

int main() {
      int arr[]={2,-3,6,-5,4,2};
      int n=sizeof(arr)/sizeof(int);
      maxsumsubarr(arr,n);
    
    return 0;
}