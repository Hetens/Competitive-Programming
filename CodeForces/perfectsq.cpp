#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> transpose(const vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    vector<vector<int>> result(cols, vector<int>(rows));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = matrix[i][j];
        }
    }

    return result;
}

int main() {
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n));
        
        for (int k = 0; k < n; k++) {
            for (int j = 0; j < n; j++) {
                cin >> a[k][j];
            }
        }
        vector<vector<int>> transposeMatrix = transpose(a);


    }
    
    return 0;
}
