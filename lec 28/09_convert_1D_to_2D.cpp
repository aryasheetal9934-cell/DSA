#include<iostream>
using namespace std;

int main(){

    int arr[6] = {1,2,3,4,5,6};
    int matrix[2][3];

    int k = 0;

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            matrix[i][j] = arr[k];
            k++;
            cout<<matrix[i][j]<<" ";
        }
         cout<<endl;
        }
        return 0;
    }

