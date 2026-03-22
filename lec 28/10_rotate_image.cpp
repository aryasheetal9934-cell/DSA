#include <iostream>
using namespace std;

void rotate(int matrix[][3], int n) {

    // Step 1: Transpose
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Step 2: Reverse each row
    for(int i = 0; i < n; i++) {
        int start = 0;
        int end = n - 1;

        while(start < end) {
            swap(matrix[i][start], matrix[i][end]);
            start++;
            end--;
        }
    }
}

int main() {

    int matrix[3][3] = {{1,2,3},
                        {4,5,6},
                        {7,8,9}};

    int n = 3;

    rotate(matrix,n);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
} 
