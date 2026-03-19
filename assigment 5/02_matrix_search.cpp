#include <iostream>
using namespace std;
void searchmatrix(int arr[][3],int n,int key ){
     for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
          if(arr[i][j]==key){
            cout<<1;
             return;
          }
         
        }
     
     }
       cout<<0;
}


int main() {
    int arr[][3]={{3,30,38},{44,52,54},{57,60,69}};
    int n=3;
    searchmatrix(arr,n,60);

    
    return 0;
}