#include <bits/stdc++.h>
using namespace std;

int numSpecial(vector<vector<int>>& mat) {
    int n = mat.size();
    int m = mat[0].size();

    vector<int> row(n, 0);
    vector<int> col(m, 0);

    // count row & column
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(mat[i][j] == 1){
                row[i]++;
                col[j]++;
            }
        }
    }

    int count = 0;

    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(mat[i][j] == 1 && row[i] == 1 && col[j] == 1){
                count++;
            }
        }
    }

    return count;
}


int main() {
    vector<vector<int>> mat = {
        {1,0,0},
        {0,0,1},
        {1,0,0}
    };

    cout << numSpecial(mat);

    return 0;
}