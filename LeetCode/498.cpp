#include <iostream>
#include <vector>
#include <algorithm>  // ✅ needed for reverse
using namespace std;

vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
    int m = mat.size();
    int n = mat[0].size();
    
    vector<int> result;
    result.reserve(m * n);
    
    for (int d = 0; d < m + n - 1; d++) {
        vector<int> temp;
        
        int r = (d < n) ? 0 : d - n + 1;
        int c = (d < n) ? d : n - 1;
        
        while (r < m && c >= 0) {
            temp.push_back(mat[r][c]);
            r++;
            c--;
        }
        
        if (d % 2 == 0) {
            reverse(temp.begin(), temp.end());
        }
        
        for (int x : temp) {
            result.push_back(x);
        }
    }
    
    return result;
}

int main() {
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    vector<int> ans = findDiagonalOrder(mat);
    
    for (int x : ans) {
        cout << x << " ";
    }
    
    return 0;
}