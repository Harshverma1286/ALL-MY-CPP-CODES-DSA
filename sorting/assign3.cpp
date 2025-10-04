#include <iostream>
#include <vector>

using namespace std;

int rowWithMaxOnes(vector<vector<int>>& matrix) {
    int maxOnesRow = 0;
    int maxOnesCount = 0;

    for (int i = 0; i < matrix.size(); ++i) {
        int onesCount = 0;
        for (int j = 0; j < matrix[i].size(); ++j) {
            if (matrix[i][j] == 1) {
                onesCount++;
            } else {
                break; // Since rows are sorted, no need to continue checking once we encounter a 0
            }
        }
        if (onesCount > maxOnesCount) {
            maxOnesCount = onesCount;
            maxOnesRow = i;
        }
    }

    // Return the index of the row with the maximum number of 1's
    return maxOnesRow + 1; // Adding 1 to make it 1-indexed as in the example output
}

int main() {
    vector<vector<int>> matrix = {
        {0, 1, 1, 1},
        {0, 0, 1, 1},
        {1, 1, 1, 1},
        {0, 0, 0, 0}
    };

    cout << "Output: " << rowWithMaxOnes(matrix) << endl;

    return 0;
}
