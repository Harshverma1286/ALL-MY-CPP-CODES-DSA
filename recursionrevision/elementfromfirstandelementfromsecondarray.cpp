#include <bits/stdc++.h>
using namespace std;

void generateAlternateArrays(vector<int> &arr1, vector<int> &arr2, int i, int j, vector<int> &temp, bool isFromA, vector<vector<int>> &results) {
    // Append the current sequence to results if it has more than one element
    if (temp.size() > 1) {
        results.push_back(temp);
    }

    if (isFromA) {
        // Pick elements from arr1
        for (int k = i; k < arr1.size(); ++k) {
            if (temp.empty() || arr1[k] > temp.back()) {
                temp.push_back(arr1[k]);
                generateAlternateArrays(arr1, arr2, k + 1, j, temp, false, results);
                temp.pop_back(); // Backtrack
            }
        }
    } else {
        // Pick elements from arr2
        for (int k = j; k < arr2.size(); ++k) {
            if (arr2[k] > temp.back()) {
                temp.push_back(arr2[k]);
                generateAlternateArrays(arr1, arr2, i, k + 1, temp, true, results);
                temp.pop_back(); // Backtrack
            }
        }
    }
}

int main() {
    vector<int> arr1 = {10, 15, 25};
    vector<int> arr2 = {1, 5, 20, 30};
    vector<int> temp;
    vector<vector<int>> results;

    // Start by picking elements from arr1
    generateAlternateArrays(arr1, arr2, 0, 0, temp, true, results);

    // Print the results in the desired format
    for (const auto &seq : results) {
        cout << "{";
        for (size_t i = 0; i < seq.size(); ++i) {
            cout << seq[i];
            if (i != seq.size() - 1) cout << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}
