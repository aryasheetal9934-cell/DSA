#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    int i = 0;
    int j = cols - 1;

    while (i < rows && j >= 0) {
        if (matrix[i][j] == target) {
            return true;
        }
        else if (matrix[i][j] > target) {
            j--; // move left
        }
        else {
            i++; // move down
        }
    }

    return false;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
    };

    int target = 5;

    if (searchMatrix(matrix, target)) {
        cout << "Target found";
    } else {
        cout << "Target not found";
    }

    return 0;
}