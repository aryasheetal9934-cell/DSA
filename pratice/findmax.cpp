#include <iostream>
using namespace std;
void traped(int height[],int n){
    int left[20000],right[20000];
    left[0]=height[0];
    right[n-1]=height[n-1];
    for(int i=1;i<n;i++){
       left[i]=max(left[i-1],height[i-1]);
    }
    for(int i=n-2;i>0;i--){
        right[i]=max(right[i+1],height[i+1]);
    }
    int watertraped=0;
    for(int i=0;i<n;i++){
    int currwater=min(left[i],right[i])-height[i];
    if(currwater>0){
        watertraped+=currwater;
        }
}
    cout<<watertraped<<endl;;
}

int main() {
    int n;
    cin>>n;
    int height[n];
    for(int i=0;i<n;i++){
        cin>>height[i];
    }
    traped(height,n);

    return 0;
}
