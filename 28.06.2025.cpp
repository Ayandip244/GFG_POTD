class Solution {
  public:
    vector<int> countLessEq(vector<int>& a, vector<int>& b) {
        // code here
        int n = a.size();
        int m = b.size();
        vector<int> result(n);
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = 0; j < m; j++) {
                if (b[j] <= a[i]) count++;
            }
            result[i] = count;
        }
        return result;
    }
};
