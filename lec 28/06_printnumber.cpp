#include <iostream>
using namespace std;
void search(int arr[][3],int key,int n){
    int total=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==key){
                total++;
                
               
            }

        }
    }
    cout<<total;
}

int main() {
    
    int arr[][3]={{4,7,8},{8,8,7}};
    int n=sizeof(arr)/sizeof(arr[0]);
    search(arr,7,n);
    return 0;
}