#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    int nums[]={3,2,1,5,6,4};
    int n=sizeof(nums)/sizeof(int);
    sort(nums,nums+n,greater<int>());
    int k=2;
 
    cout<<nums[k-1]<<endl;
        
    return 0;
}