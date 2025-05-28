class Solution {
  public:
    bool ValidCorner(vector<vector<int> >& mat) {
        // code here
        int m = mat.size();
        int n = mat[0].size();

        for (int r1 = 0; r1 < m; r1++) {
            for (int r2 = r1 + 1; r2 < m; r2++) {
                for (int c1 = 0; c1 < n; c1++) {
                    for (int c2 = c1 + 1; c2 < n; c2++) {
                        if (mat[r1][c1] == 1 && mat[r1][c2] == 1 &&
                            mat[r2][c1] == 1 && mat[r2][c2] == 1) {
                            return true;
                        }
                    }
                }
            }
        }

        return false;
    }
};
