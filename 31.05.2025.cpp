class Solution {
  public:
    int kthSmallest(vector<vector<int>> &matrix, int k) {
        // code here
        int n = matrix.size();
        vector<int> result;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                result.push_back(matrix[i][j]);
            }
        }
        sort(result.begin(), result.end());
        return result[k - 1];
    }
};
