#include <iostream>
using namespace std;
void searchmatrix(int matrix[][4],int key,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        if(matrix[i][j] == key){
        cout<< i<<","<<j;
        return;
    }}}

    cout<<"-1";
}

int main() {
    int matrix[][4]={{10,20,30,40},
                  {15,25,35,45},
                  {27,29,37,48},
                  {32,33,39,50} };
    int n=sizeof(matrix)/sizeof(matrix[0]);
    searchmatrix(matrix,48,n);
    
    return 0;
}